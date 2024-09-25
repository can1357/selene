#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x152c07aaba00a647)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x362fb92aa1594274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xe1c257657264a8e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bcdDescriptorVersion", bcd_descriptor_version, 0x18, 0x8, true, 0xb6cd684f3b211bb1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bmAttributes.AsUlong", as_ulong, 0x0, 0x20, true, 0xf5e01d4741a9f4a6)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bmAttributes.GetFirmwareImageHashSupport", get_firmware_image_hash_support, 0x0, 0x1, true, 0x5817e563d8fde66b, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bmAttributes.DisallowFirmwareUpdateSupport", disallow_firmware_update_support, 0x1, 0x1, true, 0x97b856082ada2980, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_attributes_t), "_USB_DEVICE_CAPABILITY_FIRMWARE_STATUS_DESCRIPTOR.bmAttributes", bm_attributes, 0x20, 0x20, true, 0xaf85e05e9453e17b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif