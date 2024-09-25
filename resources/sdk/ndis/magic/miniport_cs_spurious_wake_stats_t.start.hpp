#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonUnspec", wake_reason_unspec, 0x0, 0x0, false, 0xf0d723736d424d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonPacket", wake_reason_packet, 0x0, 0x0, false, 0x6dec261f4c2e44a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonMediaDisconnect", wake_reason_media_disconnect, 0x0, 0x0, false, 0x8763a3231c74bd43)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonMediaConnect", wake_reason_media_connect, 0x0, 0x0, false, 0x65f2bdcfcc485852)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWlanNLODiscovery", wake_reason_wlan_nlo_discovery, 0x0, 0x0, false, 0xbf15f2aa500be150)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWlanApAssociationLost", wake_reason_wlan_ap_association_lost, 0x0, 0x0, false, 0x828ef92afe57931)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWlanGTKHandshakeError", wake_reason_wlan_gtk_handshake_error, 0x0, 0x0, false, 0xf2b1650ca81b3337)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWlan4WayHandshakeRequest", wake_reason_wlan4_way_handshake_request, 0x0, 0x0, false, 0x2faf387798c4a28)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWwanRegisterState", wake_reason_wwan_register_state, 0x0, 0x0, false, 0x314673c249b79dce)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWwanSMSReceive", wake_reason_wwan_sms_receive, 0x0, 0x0, false, 0xcb706963c06e173)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.WakeReasonWwanUSSDReceive", wake_reason_wwan_ussd_receive, 0x0, 0x0, false, 0xbe690507109f5d04)
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