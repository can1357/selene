#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CO_ADDRESS_FAMILY.AddressFamily", address_family, 0x0, 0x20, true, 0x1fb7c562586456ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CO_ADDRESS_FAMILY.MajorVersion", major_version, 0x20, 0x20, true, 0xdc9fedfda3b3446e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CO_ADDRESS_FAMILY.MinorVersion", minor_version, 0x40, 0x20, true, 0x51b277958dcf8717)
#else
#define _m00
#define _m01
#define _m02
#endif