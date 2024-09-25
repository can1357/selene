#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x67a11bd451a6bfc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xea91ae9a923d99c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bNumberOfPorts", b_number_of_ports, 0x10, 0x8, true, 0xeef7dd95f08b41eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_30_HUB_DESCRIPTOR.wHubCharacteristics", w_hub_characteristics, 0x18, 0x10, true, 0xdfef3b33f8b79a49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bPowerOnToPowerGood", b_power_on_to_power_good, 0x28, 0x8, true, 0xbbd268e25ebdcc01)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bHubControlCurrent", b_hub_control_current, 0x30, 0x8, true, 0xa123c5bc7847cb5f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_30_HUB_DESCRIPTOR.bHubHdrDecLat", b_hub_hdr_dec_lat, 0x38, 0x8, true, 0xa302a52008395f27)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_30_HUB_DESCRIPTOR.wHubDelay", w_hub_delay, 0x40, 0x10, true, 0x4f43d6c91bffec99)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_30_HUB_DESCRIPTOR.DeviceRemovable", device_removable, 0x50, 0x10, true, 0x20b9d091e78414ba)
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
#endif