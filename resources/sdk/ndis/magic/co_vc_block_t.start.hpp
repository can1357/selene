#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_VC_BLOCK.References", references, 0x0, 0x20, true, 0xc4bdedf64e54b1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_CO_VC_BLOCK.Flags", flags, 0x20, 0x20, true, 0x2385d76fbf42ae80)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_CO_VC_BLOCK.Lock", lock, 0x40, 0x40, true, 0xd1cc8b841b7048f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_VC_BLOCK.ClientOpen", client_open, 0x80, 0x40, true, 0x2d9be43f58d7c2d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_BLOCK.ClientContext", client_context, 0xc0, 0x40, true, 0xc7c1a4965c4d47f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_vc_ptr_block_t*), "_NDIS_CO_VC_BLOCK.pProxyVcPtr", p_proxy_vc_ptr, 0x100, 0x40, true, 0x9e670ef02cd0edec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_vc_ptr_block_t*), "_NDIS_CO_VC_BLOCK.pClientVcPtr", p_client_vc_ptr, 0x140, 0x40, true, 0xa94b4385b9586bb8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*), "_NDIS_CO_VC_BLOCK.CoSendCompleteHandler", co_send_complete_handler, 0x180, 0x40, true, 0xa4e4c89572834a26)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*), "_NDIS_CO_VC_BLOCK.CoReceivePacketHandler", co_receive_packet_handler, 0x1c0, 0x40, true, 0xe024b30cb40d4f39)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_CO_VC_BLOCK.CoSendNetBufferListsCompleteHandler", co_send_net_buffer_lists_complete_handler, 0x200, 0x40, true, 0xcf2a2e32b534358f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_CO_VC_BLOCK.CoReceiveNetBufferListsHandler", co_receive_net_buffer_lists_handler, 0x240, 0x40, true, 0xe16449368c4523a5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_CO_VC_BLOCK.CallMgrOpen", call_mgr_open, 0x280, 0x40, true, 0xe62c0a6954076641)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_BLOCK.CallMgrContext", call_mgr_context, 0x2c0, 0x40, true, 0xfe6c0e8a4338be9d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_BLOCK.CmActivateVcCompleteHandler", cm_activate_vc_complete_handler, 0x300, 0x40, true, 0x4da837f34547c902)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_CO_VC_BLOCK.CmDeactivateVcCompleteHandler", cm_deactivate_vc_complete_handler, 0x340, 0x40, true, 0xbc00edc1a1308e9e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_CO_VC_BLOCK.CmModifyCallQoSHandler", cm_modify_call_qo_s_handler, 0x380, 0x40, true, 0xd2802ecd0597c68f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_CO_VC_BLOCK.Miniport", miniport, 0x3c0, 0x40, true, 0xf1ed55b1730b042e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_CO_VC_BLOCK.MiniportContext", miniport_context, 0x400, 0x40, true, 0x273f0f01280a944b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_CO_VC_BLOCK.VcId", vc_id, 0x440, 0x40, true, 0x5090dc921e1c8675)
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
#endif