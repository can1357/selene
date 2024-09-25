#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_status_indication_t), "_NDIS_802_11_AUTHENTICATION_EVENT.Status", status, 0x0, 0x20, true, 0x508c3ba6d225fa9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::_802_11_authentication_request_t, 1>), "_NDIS_802_11_AUTHENTICATION_EVENT.Request", request, 0x20, 0x80, true, 0xb14bb605b980b7b6)
#else
#define _m00
#define _m01
#endif