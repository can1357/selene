#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLASTINPUTINFO.cbSize", cb_size, 0x0, 0x20, true, 0xbadf05253e75de6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagLASTINPUTINFO.dwTime", dw_time, 0x20, 0x20, true, 0xcfd44c6497402683)
#else
#define _m00
#define _m01
#endif