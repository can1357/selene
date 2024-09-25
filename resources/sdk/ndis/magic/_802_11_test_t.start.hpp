#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_TEST.Length", length, 0x0, 0x20, true, 0x21e93b16e5cd37b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_TEST.Type", type, 0x20, 0x20, true, 0xafd8d4fc8911604a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_authentication_event_t), "_NDIS_802_11_TEST.AuthenticationEvent", authentication_event, 0x40, 0xa0, true, 0xb1229386603bde3b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_802_11_TEST.RssiTrigger", rssi_trigger, 0x40, 0x20, true, 0x183d6ff5c930bff2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif