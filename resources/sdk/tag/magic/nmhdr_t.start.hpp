#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagNMHDR.hwndFrom", hwnd_from, 0x0, 0x40, true, 0x327689769d5ad7c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagNMHDR.idFrom", id_from, 0x40, 0x40, true, 0x6dab534b3c509b3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagNMHDR.code", code, 0x80, 0x20, true, 0x3e6dfebe99252312)
#else
#define _m00
#define _m01
#define _m02
#endif