/*************************************************************************
 * Embedded System CRC16 Table Generator
 *
 * By Ashley Roll
 * Digital Nemesis Pty Ltd
 * www.digitalnemesis.com 
 *
 * To generate a CRC16 value efficiently, one needs to use a table 
 * driven algorithm. The generation of these tables fairly simple but
 * the code is often hard to find and is almost always designed for
 * generating a 256 entry table for operating on 8bits at a time.
 * 
 * In Embedded Systems there are often severe space limitations and a full
 * table of 256 16 bit entries would never fit. However the CRC16 algorithm
 * does not require such a large table to work. It can be done smaller.
 *
 * On the PIC micro processors, a nibble (4bit) implementation can be
 * achieved fairly easily and this requres only a table of 16 16bit values
 * or 32 bytes.
 *
 * This code was developed from the explanations and examples at
 * http://www.geocities.com/SiliconValley/Pines/8659/crc.htm This is a 
 * good reference for those wanting to understand what is happening in
 * the CRC algorithm.
 *
 * A few notes about terms:
 *
 * The "Message" is the series of data bytes that are being feed in. These
 * are fed in Most-Significant-Bit first of the first byte first.
 *
 * I've used the Standard CCITT CRC16 polynomial as this "standard"
 * doesn't use any of the bit reflection that confuses the implementation.
 * This polynomial is 0x1021 but you could use any you like.
 *
 * When implemented properly, a 4bit table will give the same result as a
 * 8 bit table, so on the microprocessor side you can use a 4 bit table to 
 * save space and on the host side (PC) you can use a 8 bit table for speed.
 *
 * The lookup table is generated by calling GenCRC16TableEntry() with
 * index being the index in the table, NumBits the width of the lookup
 * table, eg 4 or 8. and Poly being the polynomial being used.
 *
 * Note that GenCRC16TableEntry returns a 16 bit number. This may have to
 * be slit into high and low bytes for implementation on some processors
 * like the PIC which can only support 8 bit values in tables.
 *
 *************************************************************************/

#include <stdio.h>
#include <string.h>


//#include "ex4bit.c"
//void DoTestVector();

/*
 * Calculate the value to XOR into the shifted CRC register for the given index
 * NumBits should be the "width" of the chunk being operated on eg: 4 or 8. Poly
 * is the polynomial to use eg 0x1021
 */
unsigned short GenCRC16TableEntry( const unsigned short index, const short NumBits, const unsigned short Poly )
{
	int i;
	unsigned short Ret;
		
	// Prepare the initial setup of the register so the index is at the
	// top most bits.
	Ret = index;
	Ret <<= 16 - NumBits;

	for( i = 0; i < NumBits; i++ ) {
		if( Ret & 0x8000 )
			Ret = (Ret << 1) ^ Poly;
		else 
			Ret = Ret << 1;
	}
	
	return Ret;
}

/*
 * The following Defines are used to configure the table generator
 */
#define NUM_BITS 4			// Width of message chunk each iteration of the CRC algorithm
//#define POLYNOMIAL 0x1021	// The Polynomial (0x1021 is the CCITT standard one)
#define POLYNOMIAL   0xA097
main() {
	unsigned short i, Count, te;
	
	// Setup the values to compute the table
	Count = 1 << NUM_BITS;		// Number of entries in the table
	
	// Generate the WORD width table
	printf("/* CRC16 Lookup table for %u bits per iteration. Full WORD per entry */\r\n", NUM_BITS );
	printf("unsigned short CRC16_Lookup[%u] = {", Count );

	for( i = 0; i < Count; i++ ) {
		if( (i % 8) == 0 )
			printf("\r\n\t");

		te = GenCRC16TableEntry( i, NUM_BITS, POLYNOMIAL );
		printf("0x%04X", te);

		if( i+1 != Count )
			printf(", ");
	}
	printf("\r\n};\r\n", Count );

	// Generate the HIGH byte table
	printf("/* CRC16 Lookup tables (High and Low Byte) for %u bits per iteration. */\r\n", NUM_BITS );
	printf("unsigned short CRC16_LookupHigh[%u] = {", Count );

	for( i = 0; i < Count; i++ ) {
		if( (i % 8) == 0 )
			printf("\r\n\t");

		te = GenCRC16TableEntry( i, NUM_BITS, POLYNOMIAL );
		printf("0x%02X", (unsigned char)(te >> 8));

		if( i+1 != Count )
			printf(", ");
	}
	printf("\r\n};\r\n", Count );

	// Generate the LOW byte table
	printf("unsigned short CRC16_LookupLow[%u] = {", Count );

	for( i = 0; i < Count; i++ ) {
		if( (i % 8) == 0 )
			printf("\r\n\t");

		te = GenCRC16TableEntry( i, NUM_BITS, POLYNOMIAL );
		printf("0x%02X", (unsigned char)(te & 0x00FF));

		if( i+1 != Count )
			printf(", ");
	}
	printf("\r\n};\r\n", Count );

}
