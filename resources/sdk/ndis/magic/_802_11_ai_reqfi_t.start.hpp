#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_AI_REQFI.Capabilities", capabilities, 0x0, 0x10, true, 0xeb0c1629cce2a592)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_AI_REQFI.ListenInterval", listen_interval, 0x10, 0x10, true, 0x21a3a7f141f1ad5c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_802_11_AI_REQFI.CurrentAPAddress", current_ap_address, 0x20, 0x30, true, 0x9ae9b4512197c815)
#else
#define _m00
#define _m01
#define _m02
#endif