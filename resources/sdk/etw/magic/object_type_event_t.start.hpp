#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_OBJECT_TYPE_EVENT.ObjectType", object_type, 0x0, 0x10, true, 0x70f73dfad2f998ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ETW_OBJECT_TYPE_EVENT.Name", name, 0x20, 0x10, true, 0xc0ec64001af1b70b)
#else
#define _m00
#define _m01
#endif