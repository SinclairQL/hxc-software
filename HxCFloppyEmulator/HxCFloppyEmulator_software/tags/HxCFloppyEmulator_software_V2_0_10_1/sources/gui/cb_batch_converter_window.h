
	typedef struct batchconverterparams_
	{
		HXCFLOPPYEMULATOR * flopemu;
		//HWND windowshwd;
		batch_converter_window *windowshwd;
		char sourcedir[1024];
		char destdir[1024];
		char **filelist;
		int fileformat;
		unsigned long numberoffileconverted;
		int abort;
	}batchconverterparams;

	typedef struct ff_type_
	{
		int id;
		const char * name;
		const char * plug_id;
		const char * ext;
	}ff_type;


	enum
	{
		FF_HFE=0,
		FF_MFM,
		FF_AFI,
		FF_VTR,
		FF_RAW,
		FF_IMD,
		FF_V9T9,
		FF_EHFE
	};



void dnd_bc_cb(Fl_Widget *o, void *v);
