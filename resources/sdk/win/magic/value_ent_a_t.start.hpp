#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "value_entA.ve_valuename", ve_valuename, 0x0, 0x40, true, 0xbe59fd42ec457290)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "value_entA.ve_valuelen", ve_valuelen, 0x40, 0x20, true, 0xd7226574af6a1a3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "value_entA.ve_valueptr", ve_valueptr, 0x80, 0x40, true, 0xed8732b842f475b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "value_entA.ve_type", ve_type, 0xc0, 0x20, true, 0x8c9c73cfbbf885bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif