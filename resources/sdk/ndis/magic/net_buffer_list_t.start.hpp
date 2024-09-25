#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NET_BUFFER_LIST.Next", next, 0x0, 0x40, true, 0x32b18ab37f09181)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_t*), "_NET_BUFFER_LIST.FirstNetBuffer", first_net_buffer, 0x40, 0x40, true, 0xf71635805fe6b883)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_NET_BUFFER_LIST.Link", link, 0x0, 0x80, true, 0x152a6b4e38dafc8c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_buffer_list_header_t), "_NET_BUFFER_LIST.NetBufferListHeader", net_buffer_list_header, 0x0, 0x80, true, 0x4cb1fe446404aff2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_context_t*), "_NET_BUFFER_LIST.Context", context, 0x80, 0x40, true, 0x8c2aac04f353b30f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NET_BUFFER_LIST.ParentNetBufferList", parent_net_buffer_list, 0xc0, 0x40, true, 0x3e7b5097de39a7d0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_BUFFER_LIST.NdisPoolHandle", ndis_pool_handle, 0x100, 0x40, true, 0xce9173e3e1cb6b15)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NET_BUFFER_LIST.NdisReserved", ndis_reserved, 0x180, 0x80, true, 0x142fad421e0f8aec)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_NET_BUFFER_LIST.ProtocolReserved", protocol_reserved, 0x200, 0x0, true, 0xa463ddedbd4c7069)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_NET_BUFFER_LIST.MiniportReserved", miniport_reserved, 0x300, 0x80, true, 0x72ac2ef3d2760ed1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_BUFFER_LIST.Scratch", scratch, 0x380, 0x40, true, 0xbae7d562800259d4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_BUFFER_LIST.SourceHandle", source_handle, 0x3c0, 0x40, true, 0x300e4c1207741e3b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_LIST.NblFlags", nbl_flags, 0x400, 0x20, true, 0x18ddbc5d657942ba)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NET_BUFFER_LIST.ChildRefCount", child_ref_count, 0x420, 0x20, true, 0x87790c88503b4f89)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_LIST.Flags", flags, 0x440, 0x20, true, 0x766ca4a2b492b4a9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NET_BUFFER_LIST.Status", status, 0x460, 0x20, true, 0x725a99e4bc4b1f32)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_LIST.NdisReserved2", ndis_reserved2, 0x460, 0x20, true, 0xb1541226e5cce22b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 28>), "_NET_BUFFER_LIST.NetBufferListInfo", net_buffer_list_info, 0x480, 0x40, true, 0xdd864017e1660415)
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
#define _m17
#endif