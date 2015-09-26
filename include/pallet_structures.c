/******************************************************************************
 * Title:Pallet Structure 
 * summary:Palletの構造体内容を定義
 * 
 *LastUpdate: 
******************************************************************************/

/*Palletの構造体内容を定義*/
typedef struct {
	GtkWidget *pallet_window,*window1;	//ここの*pallet_windowだけ残す
	gchar *file1;	//set file name
	GtkTextBuffer *textbuf1;	//
	gchar *buf1;	//
	gchar *script1;				// script of command
	gchar script2[1024];	// script of command
	gsize size1;	//
	gint OK_flag;//OK button clicked
	gint proc_flag1,flag1 ,flag2;	//proc_flag1:OK button clicked
	gint check_button1_flag,check_button2_flag,check_button3_flag;//
	GtkCheckButton *check_button1,*check_button2,*check_button3;//
	GtkEntry *entry1,*entry2,*entry3,*entry4,*entry5,*entry6;//
	gchar object_name[258];//common
	gchar header_flag1[2],header_flag2[2],header_flag3[2],TF_flag1[6],TF_flag2[6],TF_flag3[6];//common flag
	gchar separator[5],skip[130],comment_char[258],row_names[258],dec[3];// for text read/write option
	gchar sheet_name[258],start_row[14],start_col[14];//for excel read/write option
}StructPalletWidget;

/*構造体変数名を宣言*/
StructPalletWidget Pallet_Master; 
StructPalletWidget Pallet_Test;
StructPalletWidget Pallet_Essentials;


typedef struct {
	GtkWidget *pallet_window,*function_window1;	//
	gchar *file_path1;	//set file name
	gchar *script1;				// script of command
	gboolean process_check_flag1;	//proc_flag1:OK button clicked
	const gchar *variable_name;
	GtkEntry *entry_variable_name;//
}StructPalletFilesystemWidget;

/*構造体変数名を宣言*/
StructPalletFilesystemWidget Pallet_Filesystem;



typedef struct {
	GtkWidget *pallet_window,*function_window1;	//
	gchar *file_path1;	//set file name
	gchar *script1,*script2;				// script of command
	gboolean process_check_flag1;	//proc_flag1:OK button clicked
	gboolean toggle_button_active;	//checkbuttonの確認
	
	const gchar *variable_name;
	GtkEntry *entry_variable_name;//
	
	gchar *header;//Bool -- Use the information from the file's header line to determine column names. Defaults to true.
	GtkCheckButton *checkbutton_header;
	
	const gchar *separator;//Char -- Assume that fields are split by the separator character. If not specified, it will be guessed from the filename: .csv defaults to ',', .tsv defaults to '\t', .wsv defaults to ' '.
	GtkCheckButton *checkbutton_separator;
	GtkEntry *entry_separator;
	
	const gchar *quotemark;//Vector{Char} -- Assume that fields contained inside of two quotemark characters are quoted, which disables processing of separators and linebreaks. Set to Char[] to disable this feature and slightly improve performance. Defaults to ['"'].
	GtkCheckButton *checkbutton_quotemark;
	GtkEntry *entry_quotemark;
	
	const gchar *decimal;//Char -- Assume that the decimal place in numbers is written using the decimal character. Defaults to '.'.
	GtkCheckButton *checkbutton_decimal;
	GtkEntry *entry_decimal;
	
	const gchar *nastrings;//Vector{ASCIIString} -- Translate any of the strings into this vector into an NA. Defaults to ["", "NA"].
	GtkCheckButton *checkbutton_nastrings;
	GtkEntry *entry_nastrings;
	
	const gchar *truestrings;//Vector{ASCIIString} -- Translate any of the strings into this vector into a Boolean true. Defaults to ["T", "t", "TRUE", "true"].
	GtkCheckButton *checkbutton_truestrings;
	GtkEntry *entry_truestrings;

	const gchar *falsestrings;//Vector{ASCIIString} -- Translate any of the strings into this vector into a Boolean true. Defaults to ["F", "f", "FALSE", "false"].
	GtkCheckButton *checkbutton_falsestrings;
	GtkEntry *entry_falsestrings;
	
	const gchar *makefactors;//Bool -- Convert string columns into PooledDataVector's for use as factors. Defaults to false.
	GtkCheckButton *checkbutton_makefactors;
	
	const gchar *nrows;//Int -- Read only nrows from the file. Defaults to -1, which indicates that the entire file should be read.
	GtkCheckButton *checkbutton_nrows;
	GtkEntry *entry_nrows;
	
	const gchar *names;//Vector{Symbol} -- Use the values in this array as the names for all columns instead of or in lieu of the names in the file's header. Defaults to [], which indicates that the header should be used if present or that numeric names should be invented if there is no header.
	GtkCheckButton *checkbutton_names;
	GtkEntry *entry_names;
	
	const gchar *eltypes;//Vector{DataType} -- Specify the types of all columns. Defaults to [].
	GtkCheckButton *checkbutton_eltypes;
	GtkEntry *entry_eltypes;
	
	const *allowcomments;//Bool -- Ignore all text inside comments. Defaults to false.
	GtkCheckButton *checkbutton_allowcomments;
	
	const gchar *commentmark;//Char -- Specify the character that starts comments. Defaults to '#'.
	GtkCheckButton *checkbutton_commentmark;
	GtkEntry *entry_commentmark;
	
	const gchar *ignorepadding;//Bool -- Ignore all whitespace on left and right sides of a field. Defaults to true.
	GtkCheckButton *checkbutton_ignorepadding;
	
	const gchar *skipstart;//Int -- Specify the number of initial rows to skip. Defaults to 0.
	GtkCheckButton *checkbutton_skipstart;
	GtkEntry *entry_skipstart;
	
	const gchar *skiprows;//Vector{Int} -- Specify the indices of lines in the input to ignore. Defaults to [].
	GtkCheckButton *checkbutton_skiprows;
	GtkEntry *entry_skiprows;
	
	const gchar *skipblanks;//Bool -- Skip any blank lines in input. Defaults to true.
	GtkCheckButton *checkbutton_skipblanks;
	
	const gchar *encoding;//Symbol -- Specify the file's encoding as either :utf8 or :latin1. Defaults to :utf8
	GtkCheckButton *checkbutton_encoding;
	GtkEntry *entry_encoding;
	
	const gchar *groupe_name;
	GtkEntry *entry_groupe_name;//
	
}StructPalletReadWriteData;

/*構造体変数名を宣言*/
StructPalletReadWriteData Pallet_Write_Data;
StructPalletReadWriteData Pallet_Read_Data; 