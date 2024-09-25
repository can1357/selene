#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_PORT_DESTINATION.PortId", port_id, 0x0, 0x20, true, 0xcf3bcc03d8166749)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SWITCH_PORT_DESTINATION.NicIndex", nic_index, 0x20, 0x10, true, 0x2eb3fa2e1de2ed0)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_PORT_DESTINATION.IsExcluded", is_excluded, 0x30, 0x1, true, 0xc398f0eb66b1cfd0, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_PORT_DESTINATION.PreserveVLAN", preserve_vlan, 0x31, 0x1, true, 0x4bbf7fe0e749b6b5, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_SWITCH_PORT_DESTINATION.PreservePriority", preserve_priority, 0x32, 0x1, true, 0x8fa09d89dc76babc, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif