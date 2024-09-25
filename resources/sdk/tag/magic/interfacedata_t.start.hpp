#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::methoddata_t*), "tagINTERFACEDATA.pmethdata", pmethdata, 0x0, 0x40, true, 0x4bc9fd23a4a3c050)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagINTERFACEDATA.cMembers", c_members, 0x40, 0x20, true, 0xbf3ba8e5435799f4)
#else
#define _m00
#define _m01
#endif