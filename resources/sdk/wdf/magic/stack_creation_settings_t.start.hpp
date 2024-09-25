#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STACK_CREATION_SETTINGS.Flags", flags, 0x0, 0x20, true, 0xf0f58dc9ed6d4846)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STACK_CREATION_SETTINGS.DeviceType", device_type, 0x20, 0x20, true, 0x550efefa5f743527)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "STACK_CREATION_SETTINGS.SecurityDescriptor", security_descriptor, 0x40, 0x40, true, 0x7fbfd2b5628ea96f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STACK_CREATION_SETTINGS.Characteristics", characteristics, 0x80, 0x20, true, 0xe0ea62034cb968)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STACK_CREATION_SETTINGS.Exclusivity", exclusivity, 0xa0, 0x20, true, 0x4b380e514186dce4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif