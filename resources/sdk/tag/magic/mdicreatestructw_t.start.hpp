#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagMDICREATESTRUCTW.szClass", sz_class, 0x0, 0x40, true, 0x3ab4ba74cb1e0dd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagMDICREATESTRUCTW.szTitle", sz_title, 0x40, 0x40, true, 0xa2c9728e77a67887)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagMDICREATESTRUCTW.hOwner", h_owner, 0x80, 0x40, true, 0x176c6abc839d709)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTW.x", x, 0xc0, 0x20, true, 0x5abac28925357d00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTW.y", y, 0xe0, 0x20, true, 0x5f5ef75cf2149d09)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTW.cx", cx, 0x100, 0x20, true, 0x445515f9ec4c1ef8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTW.cy", cy, 0x120, 0x20, true, 0xd791f386b32acb8d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMDICREATESTRUCTW.style", style, 0x140, 0x20, true, 0x9c20aecd1c8d871c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagMDICREATESTRUCTW.lParam", l_param, 0x180, 0x40, true, 0xbd0f7dae70688d5c)
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
#endif