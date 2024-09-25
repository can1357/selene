#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NET_PNP_EVENT_NOTIFICATION.Header", header, 0x0, 0x20, true, 0x28ec21e7054d919f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PNP_EVENT_NOTIFICATION.PortNumber", port_number, 0x20, 0x20, true, 0xb1057bb082cc61b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_pnp_event_t), "_NET_PNP_EVENT_NOTIFICATION.NetPnPEvent", net_pn_p_event, 0x40, 0xc0, true, 0x612d0bc0ebddef85)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PNP_EVENT_NOTIFICATION.Flags", flags, 0x500, 0x20, true, 0xd5db362f9f2d2342)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PNP_EVENT_NOTIFICATION.SwitchId", switch_id, 0x520, 0x20, true, 0xa3cff8e787ec5d76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PNP_EVENT_NOTIFICATION.VPortId", v_port_id, 0x540, 0x20, true, 0xc40c2121b750e7f1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif