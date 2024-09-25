#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xf7ebbac956da3297)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x63779cbb662c2b53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xa4189eb75fcc25cb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.AsUlong", as_ulong, 0x0, 0x20, true, 0x6e7b766203b97781)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.LPMCapable", lpm_capable, 0x1, 0x1, true, 0x5a4174f4334089d2, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.BESLAndAlternateHIRDSupported", besl_and_alternate_hird_supported, 0x2, 0x1, true, 0x22a2a4c88e767a68, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.BaselineBESLValid", baseline_besl_valid, 0x3, 0x1, true, 0x504cae3244bc7f36, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.DeepBESLValid", deep_besl_valid, 0x4, 0x1, true, 0x1be6e74a575c1e2e, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.BaselineBESL", baseline_besl, 0x8, 0x4, true, 0x8e04a063b4d08011, 4, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes.DeepBESL", deep_besl, 0xc, 0x4, true, 0x5691d23a31bb7e38, 4, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_attributes_t), "_USB_DEVICE_CAPABILITY_USB20_EXTENSION_DESCRIPTOR.bmAttributes", bm_attributes, 0x18, 0x20, true, 0xd42e3c6d9f1163d2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif