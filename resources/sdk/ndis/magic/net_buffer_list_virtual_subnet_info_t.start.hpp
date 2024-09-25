#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO.VirtualSubnetId", virtual_subnet_id, 0x0, 0x18, true, 0x60b187e82a90bc59, 24, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO.ReservedVsidBits", reserved_vsid_bits, 0x18, 0x8, true, 0x4cb6075bfa37e0e7, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_NET_BUFFER_LIST_VIRTUAL_SUBNET_INFO.Value", value, 0x0, 0x40, true, 0xcada70807f9cc508)
#else
#define _m00
#define _m01
#define _m02
#endif