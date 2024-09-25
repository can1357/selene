#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._cAutoRetries", c_auto_retries, 0x40, 0x20, true, 0xadc9634fd66a6fc0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._cLastAutoRetryWaitIn100ns", c_last_auto_retry_wait_in100ns, 0x60, 0x20, true, 0x623ac1a4e389a4e6)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._cMaxAutoRetryWaitIn100ns", c_max_auto_retry_wait_in100ns, 0x80, 0x20, true, 0x3d7bed1f276f0507)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._cTotalAutoRetryWaitIn100ns", c_total_auto_retry_wait_in100ns, 0xa0, 0x20, true, 0x7497deeaa81b9608)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CCliModalLoop._hr", hr, 0xc0, 0x20, true, 0x65876a8cda2cf726)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CCliModalLoop._dwWakeup", dw_wakeup, 0x100, 0x40, true, 0xf25ac02cfe735864)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwMillSecToWait", dw_mill_sec_to_wait, 0x140, 0x20, true, 0xb656ef188bfaa01e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_cli_modal_loop_t*), "CCliModalLoop._pPrev", p_prev, 0x180, 0x40, true, 0xc8e1c8019a2d60d6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwTIDCallee", dw_tid_callee, 0x1c0, 0x20, true, 0x3f2541dbe96f343d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwMsgQInputFlag", dw_msg_q_input_flag, 0x1e0, 0x20, true, 0xecc1aabb70fa61c4)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CCliModalLoop._lid", lid, 0x200, 0x80, true, 0xc469e2915f6da182)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwFlags", dw_flags, 0x280, 0x20, true, 0xad24e0276cd56a71)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwWaitFlags", dw_wait_flags, 0x2a0, 0x20, true, 0x9b2aef8bab7c399a)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._wQuitCode", w_quit_code, 0x2c0, 0x20, true, 0x1b7cf498e101b5ac)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwTimeOfCall", dw_time_of_call, 0x2e0, 0x20, true, 0x742c1e585f858fbc)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwBlockTime", dw_block_time, 0x300, 0x20, true, 0xf49ebcc4d1545e80)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._dwCancelTimeout", dw_cancel_timeout, 0x320, 0x20, true, 0xfabe5433e2981ce0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CCliModalLoop._fUseOldModalLoop", f_use_old_modal_loop, 0x340, 0x20, true, 0x53e5d6618dd4983a)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CCliModalLoop._fAttachedQueueInputMessageRemovalAllowed", f_attached_queue_input_message_removal_allowed, 0x360, 0x20, true, 0x40a6cb82c45025e9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_apt_call_ctrl_t*), "CCliModalLoop._pACC", p_acc, 0x380, 0x40, true, 0xbf996fe5c92cf2a5)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CCliModalLoop._hToken", h_token, 0x3c0, 0x40, true, 0xaff15d9ce51ae35e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CCliModalLoop._fCoWaitCalled", f_co_wait_called, 0x400, 0x20, true, 0x648c857a575a6ada)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_call_chain_info_t), "CCliModalLoop._pushCallChainInfo", push_call_chain_info, 0x440, 0xc0, true, 0x56f5ebf3f5082b54)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._handleWakeForMsgCount", handle_wake_for_msg_count, 0x500, 0x20, true, 0xb12f48aae2dc94a2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._handleWakeForMsgWithInputCount", handle_wake_for_msg_with_input_count, 0x520, 0x20, true, 0xcb4c6fbafb892d63)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCliModalLoop._handleWakeForMsgDidntClearQueueCount", handle_wake_for_msg_didnt_clear_queue_count, 0x540, 0x20, true, 0xb4c28fe792519ce4)
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
#endif