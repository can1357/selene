#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_PF_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0xf6a72eb6f44dcd21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_PF_BLOCK.Open", open, 0x0, 0x0, false, 0x21e87e4dc2ea70d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_block_t*), "_NDIS_PF_BLOCK.NicSwitch", nic_switch, 0x0, 0x0, false, 0xe26fb13e35457dde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_PF_BLOCK.Reference", reference, 0x0, 0x0, false, 0xe383d5eabd4554)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PF_BLOCK.NumAttachedVPorts", num_attached_v_ports, 0x0, 0x0, false, 0x9824076b4d167bc3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_PF_BLOCK.AttachedVPortList", attached_v_port_list, 0x0, 0x0, false, 0xe310c6536bd5437f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif