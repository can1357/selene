#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x4d5d55d54e542dc3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xf59ffd01e92b3321)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xabeee1dc157373df)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.bReserved", b_reserved, 0x18, 0x8, true, 0x7a380243580407f7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_USB_DEVICE_CAPABILITY_CONTAINER_ID_DESCRIPTOR.ContainerID", container_id, 0x20, 0x80, true, 0x18fc60d983b6d58a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif