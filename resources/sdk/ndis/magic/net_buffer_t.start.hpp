#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_t*), "_NET_BUFFER.Next", next, 0x0, 0x40, true, 0xdbfe492be67e4f24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NET_BUFFER.CurrentMdl", current_mdl, 0x40, 0x40, true, 0xa771904ceab97ff1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER.CurrentMdlOffset", current_mdl_offset, 0x80, 0x20, true, 0x581749a232379cfe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER.DataLength", data_length, 0xc0, 0x20, true, 0x77236908b04ddae7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NET_BUFFER.stDataLength", st_data_length, 0xc0, 0x40, true, 0xb57738e87fa74994)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_NET_BUFFER.MdlChain", mdl_chain, 0x100, 0x40, true, 0x30f700b612ca183d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER.DataOffset", data_offset, 0x140, 0x20, true, 0xed8c1cb20e8ca181)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NET_BUFFER.Link", link, 0x0, 0x80, true, 0x419b00bdd6de8cd5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_buffer_header_t), "_NET_BUFFER.NetBufferHeader", net_buffer_header, 0x0, 0x80, true, 0x35b3a1dc419b7b42)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_BUFFER.ChecksumBias", checksum_bias, 0x180, 0x10, true, 0xf2200324af46552)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_BUFFER.NdisPoolHandle", ndis_pool_handle, 0x1c0, 0x40, true, 0xbfd701456cf57f58)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NET_BUFFER.NdisReserved", ndis_reserved, 0x200, 0x80, true, 0x871f801aa8d2b134)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 6>), "_NET_BUFFER.ProtocolReserved", protocol_reserved, 0x280, 0x80, true, 0xde12050a5a304979)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_NET_BUFFER.MiniportReserved", miniport_reserved, 0x400, 0x0, true, 0xb8acee99aead6a4d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NET_BUFFER.DataPhysicalAddress", data_physical_address, 0x500, 0x40, true, 0x1da813edf0f17c27)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_shared_memory_t*), "_NET_BUFFER.SharedMemoryInfo", shared_memory_info, 0x540, 0x40, true, 0xaed40e2e30b18398)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "_NET_BUFFER.ScatterGatherList", scatter_gather_list, 0x540, 0x40, true, 0xb4788409d0fd3729)
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
#define _m16
#endif