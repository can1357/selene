#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "value_entW.ve_valuename", ve_valuename, 0x0, 0x40, true, 0xaa2ffab3213c0e4e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "value_entW.ve_valuelen", ve_valuelen, 0x40, 0x20, true, 0x8ef71f2438925253)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "value_entW.ve_valueptr", ve_valueptr, 0x80, 0x40, true, 0xebc6e26b81bde72f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "value_entW.ve_type", ve_type, 0xc0, 0x20, true, 0xe6c55e44d728c9c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif