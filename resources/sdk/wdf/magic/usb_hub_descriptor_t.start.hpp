#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_DESCRIPTOR.bDescriptorLength", b_descriptor_length, 0x0, 0x8, true, 0xbd5b88461d5afc86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x23d62e034a46b859)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_DESCRIPTOR.bNumberOfPorts", b_number_of_ports, 0x10, 0x8, true, 0xb19c47edb6effbbf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_HUB_DESCRIPTOR.wHubCharacteristics", w_hub_characteristics, 0x18, 0x10, true, 0xa50ed8af43f0f4a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_DESCRIPTOR.bPowerOnToPowerGood", b_power_on_to_power_good, 0x28, 0x8, true, 0x2a64253e0e6aa959)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_HUB_DESCRIPTOR.bHubControlCurrent", b_hub_control_current, 0x30, 0x8, true, 0x7ece1103b3602b1e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_USB_HUB_DESCRIPTOR.bRemoveAndPowerMask", b_remove_and_power_mask, 0x38, 0x0, true, 0x49051c21309526e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif