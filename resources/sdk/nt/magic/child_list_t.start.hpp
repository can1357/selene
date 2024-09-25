#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CHILD_LIST.Count", count, 0x0, 0x20, true, 0x268ca4282af84d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CHILD_LIST.List", list, 0x20, 0x20, true, 0x28f739d9087918a1)
#else
#define _m00
#define _m01
#endif