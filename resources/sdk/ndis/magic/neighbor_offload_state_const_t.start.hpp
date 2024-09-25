#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_NEIGHBOR_OFFLOAD_STATE_CONST.Header", header, 0x0, 0x40, true, 0xe893e186a8898c24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NEIGHBOR_OFFLOAD_STATE_CONST.DlSourceAddress", dl_source_address, 0x40, 0x0, true, 0xed2c7139bdcaf369)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_NEIGHBOR_OFFLOAD_STATE_CONST.VlanId", vlan_id, 0x140, 0xc, true, 0xf94cf3c44352759d, 12, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif