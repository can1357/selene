#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DOCINFOW.cbSize", cb_size, 0x0, 0x20, true, 0x3c564c6520629bb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_DOCINFOW.lpszDocName", lpsz_doc_name, 0x40, 0x40, true, 0x7c262f183c694ed2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_DOCINFOW.lpszOutput", lpsz_output, 0x80, 0x40, true, 0xd3f74d0208e834dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_DOCINFOW.lpszDatatype", lpsz_datatype, 0xc0, 0x40, true, 0xeba4328cafd87a55)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOCINFOW.fwType", fw_type, 0x100, 0x20, true, 0xfead31c00e9e1389)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif