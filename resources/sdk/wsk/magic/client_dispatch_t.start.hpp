#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WSK_CLIENT_DISPATCH.Version", version, 0x0, 0x10, true, 0xf3dc73012f6b4d19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wsk_client_event_t ), "_WSK_CLIENT_DISPATCH.WskClientEvent", wsk_client_event, 0x40, 0x40, true, 0xdc8efe55e446585b)
#else
#define _m00
#define _m01
#endif