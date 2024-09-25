#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKBDLLHOOKSTRUCT.vkCode", vk_code, 0x0, 0x20, true, 0xbfe086b4cd59af52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKBDLLHOOKSTRUCT.scanCode", scan_code, 0x20, 0x20, true, 0x11656c425125b52e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKBDLLHOOKSTRUCT.flags", flags, 0x40, 0x20, true, 0x1e596c0c9b5ca14e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKBDLLHOOKSTRUCT.time", time, 0x60, 0x20, true, 0x10da2015f5f26b5f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagKBDLLHOOKSTRUCT.dwExtraInfo", dw_extra_info, 0x80, 0x40, true, 0x5e4d91e7ca990fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif