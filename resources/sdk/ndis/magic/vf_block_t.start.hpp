#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VF_BLOCK.AdapterLink", adapter_link, 0x0, 0x0, false, 0xabdc95154595181d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VF_BLOCK.OpenLink", open_link, 0x0, 0x0, false, 0x937aafa8025586dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VF_BLOCK.SwitchLink", switch_link, 0x0, 0x0, false, 0x59ccac2a23536a8c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_VF_BLOCK.Miniport", miniport, 0x0, 0x0, false, 0xfb996e165ffbc5ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_VF_BLOCK.Open", open, 0x0, 0x0, false, 0x6658f96f9557ebe5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_block_t*), "_NDIS_VF_BLOCK.NicSwitch", nic_switch, 0x0, 0x0, false, 0x694949b503873c26)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_VF_BLOCK.Reference", reference, 0x0, 0x0, false, 0xb6515a0dac33899b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_VF_BLOCK.NumAttachedVPorts", num_attached_v_ports, 0x0, 0x0, false, 0xfe027d2307172fc0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_VF_BLOCK.AttachedVPortList", attached_v_port_list, 0x0, 0x0, false, 0xe427a2c4c32a3286)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_vf_parameters_t), "_NDIS_VF_BLOCK.VFParameters", vf_parameters, 0x0, 0x0, false, 0xc44a14958911b879)
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
#endif