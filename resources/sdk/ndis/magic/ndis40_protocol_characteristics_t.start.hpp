#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS40_PROTOCOL_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x0, 0x8, true, 0xfaae65633f86bd99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS40_PROTOCOL_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x8, 0x8, true, 0x8c45bda13edc6bf3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS40_PROTOCOL_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0x113fa2c1f3f23dd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS40_PROTOCOL_CHARACTERISTICS.Flags", flags, 0x20, 0x20, true, 0xf9474359678a1276)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.OpenAdapterCompleteHandler", open_adapter_complete_handler, 0x40, 0x40, true, 0x65c0c4befd9f8286)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.CloseAdapterCompleteHandler", close_adapter_complete_handler, 0x80, 0x40, true, 0xacb55734121d85e3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.SendCompleteHandler", send_complete_handler, 0xc0, 0x40, true, 0x93217f7754bb5018)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::wan_packet_t*, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.WanSendCompleteHandler", wan_send_complete_handler, 0xc0, 0x40, true, 0x78edbfd204a6dd0d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.TransferDataCompleteHandler", transfer_data_complete_handler, 0x100, 0x40, true, 0x78f2a8cf5ca36015)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.WanTransferDataCompleteHandler", wan_transfer_data_complete_handler, 0x100, 0x40, true, 0xcc38e0ad2def875c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.ResetCompleteHandler", reset_complete_handler, 0x140, 0x40, true, 0x5ef43fc88259694d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::request_t*, int32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.RequestCompleteHandler", request_complete_handler, 0x180, 0x40, true, 0xc89dbe6203da5171)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.ReceiveHandler", receive_handler, 0x1c0, 0x40, true, 0x5eecc2e45151c4f8)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, uint32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.WanReceiveHandler", wan_receive_handler, 0x1c0, 0x40, true, 0x207ff30e145da1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.ReceiveCompleteHandler", receive_complete_handler, 0x200, 0x40, true, 0xc6b82d17438e4ab5)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.StatusHandler", status_handler, 0x240, 0x40, true, 0xff9a365f1542f2d4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.StatusCompleteHandler", status_complete_handler, 0x280, 0x40, true, 0xdd57818b73d0d77)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS40_PROTOCOL_CHARACTERISTICS.Name", name, 0x2c0, 0x80, true, 0xb06293e21de1461d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.ReceivePacketHandler", receive_packet_handler, 0x340, 0x40, true, 0x2b3651dff114774d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, nt::unicode_view*, void*, void*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.BindAdapterHandler", bind_adapter_handler, 0x380, 0x40, true, 0x8c4bb58c7d822919)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, void*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.UnbindAdapterHandler", unbind_adapter_handler, 0x3c0, 0x40, true, 0x25a3dcb3619ff6e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_t*)>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.PnPEventHandler", pn_p_event_handler, 0x400, 0x40, true, 0x3327c615ef218bc2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS40_PROTOCOL_CHARACTERISTICS.UnloadHandler", unload_handler, 0x440, 0x40, true, 0xddbfb48e0c4e6677)
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
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif