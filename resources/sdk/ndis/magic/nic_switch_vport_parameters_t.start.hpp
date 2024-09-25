#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.Header", header, 0x0, 0x20, true, 0x9c901f471f6630c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x533a301b8e53b7d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.SwitchId", switch_id, 0x40, 0x20, true, 0xcf468f506a46b531)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.VPortId", v_port_id, 0x60, 0x20, true, 0x65c83e102768afe9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.VPortName", v_port_name, 0x80, 0x20, true, 0x7f3fab8ed890dfb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.AttachedFunctionId", attached_function_id, 0x10a0, 0x10, true, 0x7173410c8150ef56)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.NumQueuePairs", num_queue_pairs, 0x10c0, 0x20, true, 0xd814b98ec2136f81)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nic_switch_vport_interrupt_moderation_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.InterruptModeration", interrupt_moderation, 0x10e0, 0x20, true, 0xdf163852b53a4481)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nic_switch_vport_state_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.VPortState", v_port_state, 0x1100, 0x20, true, 0x7e26935103fae761)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.ProcessorAffinity", processor_affinity, 0x1140, 0x80, true, 0x2f0524908754734b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.LookaheadSize", lookahead_size, 0x11c0, 0x20, true, 0x9b5be3379898fbb9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_parameters_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.NdkParams", ndk_params, 0x1200, 0x40, true, 0x51284d0bcd35be43)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VPORT_PARAMETERS.QosSqId", qos_sq_id, 0x1740, 0x20, true, 0xa089cae47f3a6fbd)
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
#endif