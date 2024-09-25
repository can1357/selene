#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagKEYBDINPUT.wVk", w_vk, 0x0, 0x10, true, 0x7fc5c1a5ab2a7034)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagKEYBDINPUT.wScan", w_scan, 0x10, 0x10, true, 0x97bf02c67c809416)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKEYBDINPUT.dwFlags", dw_flags, 0x20, 0x20, true, 0x56c8d571ee760932)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagKEYBDINPUT.time", time, 0x40, 0x20, true, 0xdc564756edc5339d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagKEYBDINPUT.dwExtraInfo", dw_extra_info, 0x80, 0x40, true, 0xbed121b74a2743c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif