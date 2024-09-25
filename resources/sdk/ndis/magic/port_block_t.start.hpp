#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PORT_BLOCK.Link", link, 0x0, 0x80, true, 0xcd492753ee1933ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_pnp_state_t), "_NDIS_PORT_BLOCK.PortPnPState", port_pn_p_state, 0x80, 0x20, true, 0xa410d0326cd0c6a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_pnp_state_t), "_NDIS_PORT_BLOCK.PrevPortPnPState", prev_port_pn_p_state, 0xa0, 0x20, true, 0xd25c0e357d60995c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::port_characteristics_t), "_NDIS_PORT_BLOCK.PortCharacteristics", port_characteristics, 0xc0, 0x0, true, 0x644d9e874bc179da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif