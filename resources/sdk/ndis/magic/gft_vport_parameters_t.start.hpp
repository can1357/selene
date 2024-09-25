#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_VPORT_PARAMETERS.Header", header, 0x0, 0x20, true, 0x9e1937fcb64c4a4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x78394d2bb2a8794a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.VPortId", v_port_id, 0x40, 0x20, true, 0x1f9c78e279e24c16)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.ExceptionVPortId", exception_v_port_id, 0x60, 0x20, true, 0x83e6ef2c53e526f0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.SamplingRate", sampling_rate, 0x80, 0x20, true, 0x22d1e507fa95217)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_VPORT_PARAMETERS.DscpMask", dscp_mask, 0xc0, 0x40, true, 0xd8821404a997d3c0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.NumDscpMaskCounterObjects", num_dscp_mask_counter_objects, 0x100, 0x20, true, 0x15efbe78091a782f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_NDIS_GFT_VPORT_PARAMETERS.DscpMaskCounterIdArray", dscp_mask_counter_id_array, 0x120, 0x0, true, 0x4a48e7b0309b1b60)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_VPORT_PARAMETERS.PriorityMask", priority_mask, 0x940, 0x40, true, 0x44c5f886a37304f3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.NumPriorityMaskCounterObjects", num_priority_mask_counter_objects, 0x980, 0x20, true, 0x41e36be8322d29ac)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_GFT_VPORT_PARAMETERS.PriorityMaskCounterIdArray", priority_mask_counter_id_array, 0x9a0, 0x0, true, 0xbd82b2d5ea8031)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_VPORT_PARAMETERS.VxLanSrcPortBase", vx_lan_src_port_base, 0xaa0, 0x10, true, 0xf327d13c178f5205)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFT_VPORT_PARAMETERS.VxLanSrcPortRange", vx_lan_src_port_range, 0xab0, 0x10, true, 0x854c31b51f4ba0f0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_VPORT_PARAMETERS.DscpFlags", dscp_flags, 0xac0, 0x20, true, 0x2c3ec7de9467bc94)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_GFT_VPORT_PARAMETERS.CustomProviderReservedPointer", custom_provider_reserved_pointer, 0x0, 0x0, false, 0x236bbf5db940edbd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_VPORT_PARAMETERS.CustomProviderReservedValue", custom_provider_reserved_value, 0x0, 0x0, false, 0x35fb08d39a04f784)
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