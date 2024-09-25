#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagMDICREATESTRUCTA.szClass", sz_class, 0x0, 0x40, true, 0x5072a20c08d90b2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagMDICREATESTRUCTA.szTitle", sz_title, 0x40, 0x40, true, 0x2b125164ba985097)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagMDICREATESTRUCTA.hOwner", h_owner, 0x80, 0x40, true, 0xe26727636c130ce6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTA.x", x, 0xc0, 0x20, true, 0xe845b0f8133315e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTA.y", y, 0xe0, 0x20, true, 0x3a8e59a65b7a58ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTA.cx", cx, 0x100, 0x20, true, 0x8b2f347aa993f777)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagMDICREATESTRUCTA.cy", cy, 0x120, 0x20, true, 0x8d1cc4755d92307d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMDICREATESTRUCTA.style", style, 0x140, 0x20, true, 0x2162a6519b9df631)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagMDICREATESTRUCTA.lParam", l_param, 0x180, 0x40, true, 0x84798f45034a22bd)
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