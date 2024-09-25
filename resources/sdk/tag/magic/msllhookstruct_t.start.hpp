#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMSLLHOOKSTRUCT.pt", pt, 0x0, 0x40, true, 0x6bfc7b11013bbd13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSLLHOOKSTRUCT.mouseData", mouse_data, 0x40, 0x20, true, 0x58f6cae5f71d742d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSLLHOOKSTRUCT.flags", flags, 0x60, 0x20, true, 0xbebefc6d8ade72b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMSLLHOOKSTRUCT.time", time, 0x80, 0x20, true, 0x7d504992e4167a10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMSLLHOOKSTRUCT.dwExtraInfo", dw_extra_info, 0xc0, 0x40, true, 0xed3061dadc38a891)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif