#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagTOUCHINPUT.x", x, 0x0, 0x20, true, 0x55232581f53903db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagTOUCHINPUT.y", y, 0x20, 0x20, true, 0x16af889114688775)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagTOUCHINPUT.hSource", h_source, 0x40, 0x40, true, 0xac7488bb437ae6f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.dwID", dw_id, 0x80, 0x20, true, 0x16694326a2ab3a49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.dwFlags", dw_flags, 0xa0, 0x20, true, 0xc7fd7593fa7b24cd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.dwMask", dw_mask, 0xc0, 0x20, true, 0x3cf3f2158b826805)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.dwTime", dw_time, 0xe0, 0x20, true, 0x8a2293a8cbcc0a8c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagTOUCHINPUT.dwExtraInfo", dw_extra_info, 0x100, 0x40, true, 0x6a12e5e8d4eff674)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.cxContact", cx_contact, 0x140, 0x20, true, 0x81a94f0e14e0f275)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTOUCHINPUT.cyContact", cy_contact, 0x160, 0x20, true, 0x3a09f301700b13cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif