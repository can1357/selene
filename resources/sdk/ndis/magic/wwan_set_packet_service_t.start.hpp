#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SET_PACKET_SERVICE.Header", header, 0x0, 0x20, true, 0x8429e33ad72d7e5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::packet_service_action_t), "_NDIS_WWAN_SET_PACKET_SERVICE.PacketServiceAction", packet_service_action, 0x20, 0x20, true, 0x209550f42df56e99)
#else
#define _m00
#define _m01
#endif