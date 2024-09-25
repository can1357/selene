#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_SIGNAL_INDICATION.Header", header, 0x0, 0x20, true, 0xa3c59b2e50f3739d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::set_signal_indication_t), "_NDIS_WWAN_SET_SIGNAL_INDICATION.SignalIndication", signal_indication, 0x20, 0x40, true, 0xba124b497e18c1cc)
#else
#define _m00
#define _m01
#endif