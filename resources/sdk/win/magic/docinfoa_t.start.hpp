#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DOCINFOA.cbSize", cb_size, 0x0, 0x20, true, 0xbb1cb1ef390ef0e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_DOCINFOA.lpszDocName", lpsz_doc_name, 0x40, 0x40, true, 0x3e711c0adde990b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_DOCINFOA.lpszOutput", lpsz_output, 0x80, 0x40, true, 0xe8644ec11d34010a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const char*), "_DOCINFOA.lpszDatatype", lpsz_datatype, 0xc0, 0x40, true, 0xd7473866c561f0dd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOCINFOA.fwType", fw_type, 0x100, 0x20, true, 0x46a55b75dac126fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif