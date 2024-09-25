#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndis50_miniport_characteristics_t), "_NDIS51_MINIPORT_CHARACTERISTICS.Ndis50Chars", ndis50_chars, 0x0, 0xc0, true, 0x28596267520d0be5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS51_MINIPORT_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x0, 0x8, true, 0x653a59e18f4f9360)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS51_MINIPORT_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x8, 0x8, true, 0xd48d9cd9b172b0e1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS51_MINIPORT_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0xa296d51d7051b0b9)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CheckForHangHandler", check_for_hang_handler, 0x40, 0x40, true, 0xd278d13d784bda32)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.DisableInterruptHandler", disable_interrupt_handler, 0x80, 0x40, true, 0xba4111e7e6c1c662)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.EnableInterruptHandler", enable_interrupt_handler, 0xc0, 0x40, true, 0x9e3ec70adb9634)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.HaltHandler", halt_handler, 0x100, 0x40, true, 0xd504b46e1112d2b0)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.HandleInterruptHandler", handle_interrupt_handler, 0x140, 0x40, true, 0x286796245f4f708c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t*, uint32_t*, enum ndis::medium_t*, uint32_t, void*, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.InitializeHandler", initialize_handler, 0x180, 0x40, true, 0xfca481539a4afa83)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t*, uint8_t*, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.ISRHandler", isr_handler, 0x1c0, 0x40, true, 0x18c3f05aebcc241)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.QueryInformationHandler", query_information_handler, 0x200, 0x40, true, 0xe426a552e1f1f8b2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t*, void*, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.ReconfigureHandler", reconfigure_handler, 0x240, 0x40, true, 0x14a057eaaca16038)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.ResetHandler", reset_handler, 0x280, 0x40, true, 0x67381b4bafd6fc34)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.SendHandler", send_handler, 0x2c0, 0x40, true, 0xcc98455ebb08f530)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::wan_packet_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.WanSendHandler", wan_send_handler, 0x2c0, 0x40, true, 0x52d769b1beef26e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.SetInformationHandler", set_information_handler, 0x300, 0x40, true, 0x7a15d68e4ef47061)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.TransferDataHandler", transfer_data_handler, 0x340, 0x40, true, 0x99072cd36e697617)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_NDIS51_MINIPORT_CHARACTERISTICS.WanTransferDataHandler", wan_transfer_data_handler, 0x340, 0x40, true, 0xe14d298d005f882b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.ReturnPacketHandler", return_packet_handler, 0x380, 0x40, true, 0x4a8ca75fe024fa08)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.SendPacketsHandler", send_packets_handler, 0x3c0, 0x40, true, 0x6e9b4b935218b339)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.AllocateCompleteHandler", allocate_complete_handler, 0x400, 0x40, true, 0x1a07176faab94efb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoCreateVcHandler", co_create_vc_handler, 0x440, 0x40, true, 0x5f220fe0569e37c3)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoDeleteVcHandler", co_delete_vc_handler, 0x480, 0x40, true, 0xba7a7c39569afd73)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoActivateVcHandler", co_activate_vc_handler, 0x4c0, 0x40, true, 0xc5c5a1ce7de52c36)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoDeactivateVcHandler", co_deactivate_vc_handler, 0x500, 0x40, true, 0x531bfb9e04873053)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoSendPacketsHandler", co_send_packets_handler, 0x540, 0x40, true, 0x2fc84ebed2dfa7e3)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CoRequestHandler", co_request_handler, 0x580, 0x40, true, 0x66735c8e3f74966e)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.CancelSendPacketsHandler", cancel_send_packets_handler, 0x5c0, 0x40, true, 0x537aac08ed293b86)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum ndis::device_pnp_event_t, void*, uint32_t)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.PnPEventNotifyHandler", pn_p_event_notify_handler, 0x600, 0x40, true, 0x7ce38122a8b38b5a)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS51_MINIPORT_CHARACTERISTICS.AdapterShutdownHandler", adapter_shutdown_handler, 0x640, 0x40, true, 0xaec5009688892c9a)
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
#define _m029
#define _m030
#endif