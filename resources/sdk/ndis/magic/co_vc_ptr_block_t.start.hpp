#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_CO_VC_PTR_BLOCK.References", references, 0x0, 0x20, true, 0x37086e3218cd50a0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_VC_PTR_BLOCK.CallFlags", call_flags, 0x20, 0x20, true, 0x44a140c7b16f18d8)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_CO_VC_PTR_BLOCK.pVcFlags", p_vc_flags, 0x40, 0x40, true, 0x5223043c810eadee)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_CO_VC_PTR_BLOCK.Lock", lock, 0x80, 0x40, true, 0x23c8ef369ec0728d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_PTR_BLOCK.ClientContext", client_context, 0xc0, 0x40, true, 0x4c3504ee99564802)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_CO_VC_PTR_BLOCK.ClientLink", client_link, 0x100, 0x80, true, 0xf81bc4bc26e86210)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_CO_VC_PTR_BLOCK.VcLink", vc_link, 0x180, 0x80, true, 0x79b0d0689e4cfa84)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_af_block_t*), "_NDIS_CO_VC_PTR_BLOCK.AfBlock", af_block, 0x200, 0x40, true, 0xa792ff6c1c9a6c6d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_vc_block_t*), "_NDIS_CO_VC_PTR_BLOCK.VcBlock", vc_block, 0x240, 0x40, true, 0x28b4e286575c8dbf)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_VC_PTR_BLOCK.ClientOpen", client_open, 0x280, 0x40, true, 0x393b7cacde5a859c)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_CO_VC_PTR_BLOCK.OwnsVcBlock", owns_vc_block, 0x2c0, 0x20, true, 0x7c54832cddf85f1f)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_VC_PTR_BLOCK.CoDeleteVcHandler", co_delete_vc_handler, 0x300, 0x40, true, 0x88d4e902aad3e4b7)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_PTR_BLOCK.DeleteVcContext", delete_vc_context, 0x340, 0x40, true, 0x680a1daebdcae294)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.ClModifyCallQoSCompleteHandler", cl_modify_call_qo_s_complete_handler, 0x380, 0x40, true, 0x8309008fed671661)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.ClIncomingCallQoSChangeHandler", cl_incoming_call_qo_s_change_handler, 0x3c0, 0x40, true, 0xe4ba717b2371cc00)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_CO_VC_PTR_BLOCK.ClCallConnectedHandler", cl_call_connected_handler, 0x400, 0x40, true, 0x9ed3a17720bd7a8a)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_VC_PTR_BLOCK.CallMgrOpen", call_mgr_open, 0x440, 0x40, true, 0x794b39c087e39955)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_PTR_BLOCK.CallMgrContext", call_mgr_context, 0x480, 0x40, true, 0x9a98a88bfc73bac)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_CO_VC_PTR_BLOCK.CallMgrLink", call_mgr_link, 0x4c0, 0x80, true, 0x6b34202f43ea74ca)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.CmActivateVcCompleteHandler", cm_activate_vc_complete_handler, 0x540, 0x40, true, 0x89d9c586bc4479fd)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_VC_PTR_BLOCK.CmDeactivateVcCompleteHandler", cm_deactivate_vc_complete_handler, 0x580, 0x40, true, 0xa3241388e58b5ac0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.CmModifyCallQoSHandler", cm_modify_call_qo_s_handler, 0x5c0, 0x40, true, 0xf5dc78e0fd4e10e5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_CO_VC_PTR_BLOCK.Miniport", miniport, 0x600, 0x40, true, 0xf53e9dd94129ccda)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_PTR_BLOCK.MiniportContext", miniport_context, 0x640, 0x40, true, 0x50075a1eb400abe2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.WCoSendPacketsHandler", w_co_send_packets_handler, 0x680, 0x40, true, 0xbfae21264238e867)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_VC_PTR_BLOCK.WCoDeleteVcHandler", w_co_delete_vc_handler, 0x6c0, 0x40, true, 0xa27ae317055a93ea)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.WCoActivateVcHandler", w_co_activate_vc_handler, 0x700, 0x40, true, 0xf8fea9afa291f224)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_CO_VC_PTR_BLOCK.WCoDeactivateVcHandler", w_co_deactivate_vc_handler, 0x740, 0x40, true, 0x2475e09a1f5e5d99)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.WCoSendNetBufferListsHandler", w_co_send_net_buffer_lists_handler, 0x780, 0x40, true, 0x46ea56c931769b64)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.CoSendNetBufferListsHandler", co_send_net_buffer_lists_handler, 0x7c0, 0x40, true, 0x1b322368eea13133)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.CoSendNetBufferListsCompleteHandler", co_send_net_buffer_lists_complete_handler, 0x800, 0x40, true, 0xc32bd4ad4c570e23)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.CoSendPacketHandler", co_send_packet_handler, 0x840, 0x40, true, 0x7b091bec47247fe5)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*), "_NDIS_CO_VC_PTR_BLOCK.CoSendPacketCompleteHandler", co_send_packet_complete_handler, 0x880, 0x40, true, 0x6029db7f2b88ded6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.CoIndicateReceivePacketHandler", co_indicate_receive_packet_handler, 0x8c0, 0x40, true, 0xc60f8a5faebde79a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_CO_VC_PTR_BLOCK.CoIndicateReceiveNetBufferListsHandler", co_indicate_receive_net_buffer_lists_handler, 0x900, 0x40, true, 0xd012b4898093bd13)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_CO_VC_PTR_BLOCK.VcInstanceName", vc_instance_name, 0x940, 0x80, true, 0x9a93b3a763c2aa8d)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_CO_VC_PTR_BLOCK.VcIndex", vc_index, 0x9c0, 0x40, true, 0x974d9eff86841f8)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_CO_VC_PTR_BLOCK.WmiLink", wmi_link, 0xa00, 0x80, true, 0x3df03160b91971b0)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_CO_VC_PTR_BLOCK.CallMiniportDeleteVc", call_miniport_delete_vc, 0xa80, 0x8, true, 0xb6c4825897ebd13c)
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
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#endif