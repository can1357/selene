#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.Header", header, 0x0, 0x20, true, 0xcf3005164616358c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_offload_block_list_t*), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.NextBlock", next_block, 0x40, 0x40, true, 0x72e6050d1ee62c51)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_offload_block_list_t*), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.DependentBlockList", dependent_block_list, 0x80, 0x40, true, 0x185d652da6228eb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.Status", status, 0xc0, 0x20, true, 0xbcc227d86981e9c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.NdisReserved", ndis_reserved, 0x100, 0x80, true, 0x6ec819ee2d35e290)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.MiniportOffloadContext", miniport_offload_context, 0x180, 0x40, true, 0xf156e6404d707dc5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.NdisOffloadHandle", ndis_offload_handle, 0x1c0, 0x40, true, 0xe7f7cd85da79fcc8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.ProtocolReserved", protocol_reserved, 0x200, 0x80, true, 0xc0e70b6bf0dfdd86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.MiniportReserved", miniport_reserved, 0x280, 0x80, true, 0x733d6415d48cc7ff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.ImReserved", im_reserved, 0x300, 0x80, true, 0x9168ecc7ed40b810)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.Scratch", scratch, 0x380, 0x80, true, 0xaa05fa3dd55f36db)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.SourceHandle", source_handle, 0x400, 0x40, true, 0xb0327556385786ea)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.PortNumber", port_number, 0x440, 0x20, true, 0xd212e3bb4e70bffc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_MINIPORT_OFFLOAD_BLOCK_LIST.NetBufferListChain", net_buffer_list_chain, 0x480, 0x40, true, 0xf7086ec6694fc2c8)
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
#endif