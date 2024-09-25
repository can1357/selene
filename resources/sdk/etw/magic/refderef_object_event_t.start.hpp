#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REFDEREF_OBJECT_EVENT.Object", object, 0x0, 0x40, true, 0x9ce16db67f756626)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REFDEREF_OBJECT_EVENT.Tag", tag, 0x40, 0x20, true, 0xe1244bc711b77290)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REFDEREF_OBJECT_EVENT.Count", count, 0x60, 0x20, true, 0x1490c19d38cbcec8)
#else
#define _m00
#define _m01
#define _m02
#endif