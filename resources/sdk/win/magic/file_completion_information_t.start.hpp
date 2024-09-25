#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_COMPLETION_INFORMATION.Port", port, 0x0, 0x40, true, 0x48c6df9c0dce26e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_COMPLETION_INFORMATION.Key", key, 0x40, 0x40, true, 0x550d9053b4af966c)
#else
#define _m00
#define _m01
#endif