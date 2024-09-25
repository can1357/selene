#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS50_MINIPORT_CHARACTERISTICS.MajorNdisVersion", major_ndis_version, 0x0, 0x8, true, 0x12b2cb41d1635c1f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS50_MINIPORT_CHARACTERISTICS.MinorNdisVersion", minor_ndis_version, 0x8, 0x8, true, 0x928b4b81743c9568)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS50_MINIPORT_CHARACTERISTICS.Filler", filler, 0x10, 0x10, true, 0xf0d07a4db56e0794)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CheckForHangHandler", check_for_hang_handler, 0x40, 0x40, true, 0x31614ca7a783492f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.DisableInterruptHandler", disable_interrupt_handler, 0x80, 0x40, true, 0x5ecfe723c5a442b2)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.EnableInterruptHandler", enable_interrupt_handler, 0xc0, 0x40, true, 0xb46b713d0953d267)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.HaltHandler", halt_handler, 0x100, 0x40, true, 0xeb0eea8e0a39712)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.HandleInterruptHandler", handle_interrupt_handler, 0x140, 0x40, true, 0x3704b0f730728494)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t*, uint32_t*, enum ndis::medium_t*, uint32_t, void*, void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.InitializeHandler", initialize_handler, 0x180, 0x40, true, 0x2fe8bc979e19d12e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint8_t*, uint8_t*, void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.ISRHandler", isr_handler, 0x1c0, 0x40, true, 0x2a8db6d888850d21)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.QueryInformationHandler", query_information_handler, 0x200, 0x40, true, 0x81ea0e8a5ad8bc89)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(int32_t*, void*, void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.ReconfigureHandler", reconfigure_handler, 0x240, 0x40, true, 0xa8728a4de20b4284)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t*, void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.ResetHandler", reset_handler, 0x280, 0x40, true, 0x71b7959a492a8b78)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.SendHandler", send_handler, 0x2c0, 0x40, true, 0x5556b592207b6f2e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::wan_packet_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.WanSendHandler", wan_send_handler, 0x2c0, 0x40, true, 0xacd3bdca0b2e9da8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.SetInformationHandler", set_information_handler, 0x300, 0x40, true, 0x39b191eab970b538)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.TransferDataHandler", transfer_data_handler, 0x340, 0x40, true, 0x3f9e4e24d04de4c4)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t()>*), "_NDIS50_MINIPORT_CHARACTERISTICS.WanTransferDataHandler", wan_transfer_data_handler, 0x340, 0x40, true, 0x16a786ad6272e8df)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.ReturnPacketHandler", return_packet_handler, 0x380, 0x40, true, 0xf54d9a51c7102889)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.SendPacketsHandler", send_packets_handler, 0x3c0, 0x40, true, 0x220abfa85d2b907b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.AllocateCompleteHandler", allocate_complete_handler, 0x400, 0x40, true, 0xc732292feb2befc)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoCreateVcHandler", co_create_vc_handler, 0x440, 0x40, true, 0x400760b80ac3efdb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoDeleteVcHandler", co_delete_vc_handler, 0x480, 0x40, true, 0x3c54eda176a7498c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoActivateVcHandler", co_activate_vc_handler, 0x4c0, 0x40, true, 0xf34cc2944fc98304)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoDeactivateVcHandler", co_deactivate_vc_handler, 0x500, 0x40, true, 0x175836984595d641)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoSendPacketsHandler", co_send_packets_handler, 0x540, 0x40, true, 0x24cc0b28bf702961)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*), "_NDIS50_MINIPORT_CHARACTERISTICS.CoRequestHandler", co_request_handler, 0x580, 0x40, true, 0x5a7fb4519b519b48)
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
#endif