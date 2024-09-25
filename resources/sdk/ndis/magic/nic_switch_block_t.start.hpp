#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NIC_SWITCH_BLOCK.AdapterLink", adapter_link, 0x0, 0x0, false, 0xf6407573e00e60d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_NIC_SWITCH_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0xb4cd5154ed3fe8fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_NIC_SWITCH_BLOCK.Open", open, 0x0, 0x0, false, 0xdfc43225e6bf0ebd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_NIC_SWITCH_BLOCK.Reference", reference, 0x0, 0x0, false, 0x832465b63a1426fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.SwitchId", switch_id, 0x0, 0x0, false, 0x8777260f3154e946)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pf_block_t*), "_NDIS_NIC_SWITCH_BLOCK.PFBlock", pf_block, 0x0, 0x0, false, 0x9c719f75bcd22a89)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumActiveVPorts", num_active_v_ports, 0x0, 0x0, false, 0x424e8f15ed17813b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NIC_SWITCH_BLOCK.VPortList", v_port_list, 0x0, 0x0, false, 0xfa323c2699a50eee)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumAllocatedVFs", num_allocated_v_fs, 0x0, 0x0, false, 0x37921deda14c0fa6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_NIC_SWITCH_BLOCK.VFList", vf_list, 0x0, 0x0, false, 0x20bced10dc9ddd3f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NonDefaultQueuePairsInUse", non_default_queue_pairs_in_use, 0x0, 0x0, false, 0x1a075a0cbd34afaa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_parameters_t), "_NDIS_NIC_SWITCH_BLOCK.SwitchParameters", switch_parameters, 0x0, 0x0, false, 0x9952ab47e2a1ee5b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumActiveDefaultVPortMacAddresses", num_active_default_v_port_mac_addresses, 0x0, 0x0, false, 0x672d3dfa362ab451)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumActiveNonDefaultVPortMacAddresses", num_active_non_default_v_port_mac_addresses, 0x0, 0x0, false, 0x524c7b23e304a9be)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumActiveDefaultVPortVlanIds", num_active_default_v_port_vlan_ids, 0x0, 0x0, false, 0x455e3ed0494a0dde)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_BLOCK.NumActiveNonDefaultVPortVlanIds", num_active_non_default_v_port_vlan_ids, 0x0, 0x0, false, 0x630be03162571291)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif