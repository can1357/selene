#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.Header", header, 0x0, 0x20, true, 0xf379f18b19848f5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_offload_block_list_t*), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.NextBlock", next_block, 0x40, 0x40, true, 0xa3aebd225d4c60b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_offload_block_list_t*), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.DependentBlockList", dependent_block_list, 0x80, 0x40, true, 0xfe369f25095b82be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.Status", status, 0xc0, 0x20, true, 0x4c0ccf02ab4100bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 3>), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.NdisReserved", ndis_reserved, 0x100, 0xc0, true, 0x24c1c6f69ae55f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_handle_t*), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.OffloadHandle", offload_handle, 0x1c0, 0x40, true, 0x9a5d7c8223e4ee3a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.ProtocolReserved", protocol_reserved, 0x200, 0x80, true, 0xe588f524c54398f4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.MiniportReserved", miniport_reserved, 0x280, 0x80, true, 0x51706ded20dbfc45)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.ImReserved", im_reserved, 0x300, 0x80, true, 0xa03c189ebd12656c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.Scratch", scratch, 0x380, 0x80, true, 0xcacd8efe4354ff4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.SourceHandle", source_handle, 0x400, 0x40, true, 0x98e510268f2b4279)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.PortNumber", port_number, 0x440, 0x20, true, 0x221a449f352e0801)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST.NetBufferListChain", net_buffer_list_chain, 0x480, 0x40, true, 0xea513cf158a16260)
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