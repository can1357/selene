#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xd92c7302050a1a81)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x8022fe1029911793)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xfa2137f6edccbd6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.bReserved", b_reserved, 0x18, 0x8, true, 0xa5cbd80ff1312565)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.PlatformCapabilityUuid", platform_capability_uuid, 0x20, 0x80, true, 0x3d053ddb89b8bf97)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR.CapabililityData", capabilility_data, 0xa0, 0x8, true, 0x1b377a760d2755b9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif