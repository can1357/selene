#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x225b423a88df8874)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x77bbd4e11f77dc24)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xd6f08215b3267f94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.iAddtionalInfoURL", i_addtional_info_url, 0x18, 0x8, true, 0xfe625eb81f9b536e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bNumberOfAlternateModes", b_number_of_alternate_modes, 0x20, 0x8, true, 0xefe33f772ba72b29)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bPreferredAlternateMode", b_preferred_alternate_mode, 0x28, 0x8, true, 0x4665b3ded4f09b7d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.VconnPower.AsUshort", as_ushort, 0x0, 0x10, true, 0xfcd3cb30a026df9)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.VconnPower.VConnPowerNeededForFullFunctionality", v_conn_power_needed_for_full_functionality, 0x0, 0x3, true, 0xa6e1f972506040b0, 3, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.VconnPower.NoVconnPowerRequired", no_vconn_power_required, 0xf, 0x1, true, 0x87fc70ce31e4b05f, 1, uint16_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_vconn_power_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.VconnPower", vconn_power, 0x30, 0x10, true, 0x3dabb0989a190b46)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bmConfigured", bm_configured, 0x40, 0x0, true, 0x35e2994036f1660d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.bReserved", b_reserved, 0x140, 0x20, true, 0xd062424e49f26ca)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.AlternateMode.wSVID", w_svid, 0x0, 0x10, true, 0xd7710dd7858c8b3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.AlternateMode.bAlternateMode", b_alternate_mode, 0x10, 0x8, true, 0x2d9d80d8dab64efd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.AlternateMode.iAlternateModeSetting", i_alternate_mode_setting, 0x18, 0x8, true, 0xc23990e1a96a371a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u4_alternate_mode_t, 1>), "_USB_DEVICE_CAPABILITY_BILLBOARD_DESCRIPTOR.AlternateMode", alternate_mode, 0x160, 0x20, true, 0x112e1ea65b4803f4)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif