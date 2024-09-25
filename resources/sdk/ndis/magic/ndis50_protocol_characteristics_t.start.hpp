#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndis40_protocol_characteristics_t), "_NDIS50_PROTOCOL_CHARACTERISTICS.Ndis40Chars", ndis40_chars, 0x0, 0x80, true, 0x6ed8fce04c4d6363)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS50_PROTOCOL_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x0, 0x8, true, 0x53fc6224f78d3bd6)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS50_PROTOCOL_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x8, 0x8, true, 0x578fd313bc166c5b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS50_PROTOCOL_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0xdeb9f1ecf23d8079)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS50_PROTOCOL_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0x15e5a6ae7c349f3f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.OpenAdapterCompleteHandler", open_adapter_complete_handler, 0x40, 0x40, true, 0x454a23fe76a52d34)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.CloseAdapterCompleteHandler", close_adapter_complete_handler, 0x80, 0x40, true, 0xf6939041d59d6e4c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.SendCompleteHandler", send_complete_handler, 0xc0, 0x40, true, 0xc0384eefa44fa105)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::wan_packet_t*, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.WanSendCompleteHandler", wan_send_complete_handler, 0xc0, 0x40, true, 0xc77408ae9d1a360b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.TransferDataCompleteHandler", transfer_data_complete_handler, 0x100, 0x40, true, 0x5dd0626884a9b885)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.WanTransferDataCompleteHandler", wan_transfer_data_complete_handler, 0x100, 0x40, true, 0x480735eec8db7f0b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.ResetCompleteHandler", reset_complete_handler, 0x140, 0x40, true, 0x81c85a8749b35f91)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::request_t*, int32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.RequestCompleteHandler", request_complete_handler, 0x180, 0x40, true, 0x14b88b055dd1e8fe)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.ReceiveHandler", receive_handler, 0x1c0, 0x40, true, 0x1a197993950d9660)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, uint32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.WanReceiveHandler", wan_receive_handler, 0x1c0, 0x40, true, 0xc5a6f0f0ed0c1366)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.ReceiveCompleteHandler", receive_complete_handler, 0x200, 0x40, true, 0x49e000318f90c530)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.StatusHandler", status_handler, 0x240, 0x40, true, 0x609c889b01b86b0a)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.StatusCompleteHandler", status_complete_handler, 0x280, 0x40, true, 0xa601f2eddcc4f2d4)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS50_PROTOCOL_CHARACTERISTICS.Name", name, 0x2c0, 0x80, true, 0x180858576f51e75e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.ReceivePacketHandler", receive_packet_handler, 0x340, 0x40, true, 0x44935752bb49b08e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, nt::unicode_view*, void*, void*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.BindAdapterHandler", bind_adapter_handler, 0x380, 0x40, true, 0x479816e06f34716d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, void*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.UnbindAdapterHandler", unbind_adapter_handler, 0x3c0, 0x40, true, 0xd6587a1044ea484d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_t*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.PnPEventHandler", pn_p_event_handler, 0x400, 0x40, true, 0x21efd9aa086bcaee)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.UnloadHandler", unload_handler, 0x440, 0x40, true, 0xce126858981caa87)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_NDIS50_PROTOCOL_CHARACTERISTICS.ReservedHandlers", reserved_handlers, 0x480, 0x0, true, 0x48d458b3faf34016)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.CoSendCompleteHandler", co_send_complete_handler, 0x580, 0x40, true, 0x4c6c31555dbac90d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int32_t, void*, uint32_t)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.CoStatusHandler", co_status_handler, 0x5c0, 0x40, true, 0x46735a2b3d2de1ce)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.CoReceivePacketHandler", co_receive_packet_handler, 0x600, 0x40, true, 0x80f46571c539242b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_address_family_t*)>*), "_NDIS50_PROTOCOL_CHARACTERISTICS.CoAfRegisterNotifyHandler", co_af_register_notify_handler, 0x640, 0x40, true, 0xe0d24f8c8327b15a)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#endif