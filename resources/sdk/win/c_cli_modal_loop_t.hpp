#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "push_call_chain_info_t.hpp"

#include "magic/c_cli_modal_loop_t.start.hpp"
namespace win
{
    class c_apt_call_ctrl_t;
    class c_cli_modal_loop_t;

    // [class CCliModalLoop]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_cli_modal_loop_t                                                                   
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                     
        _m000 uint32_t                          c_auto_retries;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cAutoRetries
        _m001 uint32_t                          c_last_auto_retry_wait_in100ns;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cLastAutoRetryWaitIn100ns
        _m002 uint32_t                          c_max_auto_retry_wait_in100ns;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cMaxAutoRetryWaitIn100ns
        _m003 uint32_t                          c_total_auto_retry_wait_in100ns;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._cTotalAutoRetryWaitIn100ns
        _m004 sdk::hresult                      hr;                                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._hr
        _m005 uint64_t                          dw_wakeup;                                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._dwWakeup
        _m006 uint32_t                          dw_mill_sec_to_wait;                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwMillSecToWait
        _m007 class win::c_cli_modal_loop_t*    p_prev;                                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pPrev
        _m008 uint32_t                          dw_tid_callee;                                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._dwTIDCallee
        _m009 uint32_t                          dw_msg_q_input_flag;                             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._dwMsgQInputFlag
        _m010 struct nt::guid_t                 lid;                                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._lid
        _m011 uint32_t                          dw_flags;                                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._dwFlags
        _m012 uint32_t                          dw_wait_flags;                                   //{ +0x0054    +0x0054    +0x0054    +0x0054    } | ._dwWaitFlags
        _m013 uint32_t                          w_quit_code;                                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._wQuitCode
        _m014 uint32_t                          dw_time_of_call;                                 //{ +0x005c    +0x005c    +0x005c    +0x005c    } | ._dwTimeOfCall
        _m015 uint32_t                          dw_block_time;                                   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._dwBlockTime
        _m016 uint32_t                          dw_cancel_timeout;                               //{ +0x0064    +0x0064    +0x0064    +0x0064    } | ._dwCancelTimeout
        _m017 int32_t                           f_use_old_modal_loop;                            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._fUseOldModalLoop
        _m018 int32_t                           f_attached_queue_input_message_removal_allowed;  //{ +0x006c    +0x006c    +0x006c    +0x006c    } | ._fAttachedQueueInputMessageRemovalAllowed
        _m019 class win::c_apt_call_ctrl_t*     p_acc;                                           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | ._pACC
        _m020 void*                             h_token;                                         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._hToken
        _m021 int32_t                           f_co_wait_called;                                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._fCoWaitCalled
        _m022 class win::push_call_chain_info_t push_call_chain_info;                            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._pushCallChainInfo
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                     
        _m023 uint32_t                          handle_wake_for_msg_count;                       //{ +0x00a0    +0x00a0    +0x00a0    } | ._handleWakeForMsgCount
        _m024 uint32_t                          handle_wake_for_msg_with_input_count;            //{ +0x00a4    +0x00a4    +0x00a4    } | ._handleWakeForMsgWithInputCount
        _m025 uint32_t                          handle_wake_for_msg_didnt_clear_queue_count;     //{ +0x00a8    +0x00a8    +0x00a8    } | ._handleWakeForMsgDidntClearQueueCount
                                                                                               
        SDK_MAGIC_PROPERTIES( "CCliModalLoop.$", 0xb0, true, 0x88268943556a823e );                                               
        SDK_DYNAMIC_SIZE( c_cli_modal_loop_t );                                                
    };                                                                                         
};
#include "magic/c_cli_modal_loop_t.end.hpp"
