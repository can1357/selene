#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_802_11_FIXED_IEs.Timestamp", timestamp, 0x0, 0x40, true, 0xb22d6be7795c2725)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_FIXED_IEs.BeaconInterval", beacon_interval, 0x40, 0x10, true, 0x1ca6756e46e78984)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_802_11_FIXED_IEs.Capabilities", capabilities, 0x50, 0x10, true, 0xa556a5bb856e0746)
#else
#define _m00
#define _m01
#define _m02
#endif