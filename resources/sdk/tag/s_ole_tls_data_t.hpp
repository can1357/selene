#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "incoming_call_data_t.hpp"
#include "outgoing_call_data_t.hpp"
#include "../win/com_tls_flags_t.hpp"
#include "../win/call_entry_buffer_t.hpp"
#include "outgoing_activation_data_t.hpp"
#include "../win/oletls_prevent_rundown_mitigation_t.hpp"

namespace win { class asta_wait_context_t;                   }
namespace win { class c_apt_call_ctrl_t;                     }
namespace win { class c_async_call_t;                        }
namespace win { class c_com_apartment_t;                     }
namespace win { class c_ctx_call_t;                          }
namespace win { class c_obj_server_t;                        }
namespace win { class c_object_context_t;                    }
namespace win { class c_policy_set_t;                        }
namespace win { class c_sm_allocator_t;                      }
namespace win { class c_srv_call_state_t;                    }
namespace win { class c_surrogated_object_list_t;            }
namespace win { class c_verifier_tls_data_t;                 }
namespace win { class co_get_standard_marshal_in_progress_t; }
namespace win { class modern_sta_wait_context_t;             }
namespace win { class push_logical_thread_id_t;              }
namespace win { class server_call_t;                         }
namespace win { class unmarshal_for_query_interface_t;       }
namespace win { struct hwnd_t;                               }
namespace win { struct i_data_object_t;                      }
namespace win { struct i_message_filter_t;                   }
namespace win { struct i_unknown_t;                          }
namespace win { struct thread_call_object_cache_t;           }
namespace win { struct wire_container_that_t;                }
namespace win { struct wire_container_this_t;                }

#include "magic/s_ole_tls_data_t.start.hpp"
namespace tag
{
    struct context_stack_node_t;
    struct initialize_spy_node_t;

    // [struct tagSOleTlsData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_ole_tls_data_t                                                                                    
    {                                                                                                          
        using p_topmost_co_get_standard_marshal_in_progress_t = class win::co_get_standard_marshal_in_progress_t*;                                                
                                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                                     
        _m000 void*                                            pv_thread_base;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pvThreadBase
        _m001 class win::c_sm_allocator_t*                     p_sm_allocator;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSmAllocator
        _m002 uint32_t                                         dw_apartment_id;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwApartmentID
        _m003 uint32_t                                         dw_flags;                                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
        _m004 int32_t                                          tls_map_index;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TlsMapIndex
        _m005 void**                                           pp_tls_slot;                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ppTlsSlot
        _m006 uint32_t                                         c_com_inits;                                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .cComInits
        _m007 uint32_t                                         c_ole_inits;                                      //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .cOleInits
        _m008 uint32_t                                         c_calls;                                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cCalls
        _m009 class win::server_call_t*                        p_server_call;                                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pServerCall
        _m010 struct win::thread_call_object_cache_t*          p_call_object_cache;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pCallObjectCache
        _m011 struct tag::context_stack_node_t*                p_context_stack;                                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pContextStack
        _m012 class win::c_obj_server_t*                       p_obj_server;                                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pObjServer
        _m013 uint32_t                                         dw_tid_caller;                                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .dwTIDCaller
        _m014 void*                                            p_current_ctx_for_nefarious_readers;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .pCurrentCtxForNefariousReaders
        _m015 class win::c_object_context_t*                   p_current_context;                                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pCurrentContext
        _m016 class win::c_object_context_t*                   p_empty_ctx;                                      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pEmptyCtx
        _m017 uint64_t                                         context_id;                                       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ContextId
        _m018 class win::c_com_apartment_t*                    p_native_apt;                                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .pNativeApt
        _m019 struct win::i_unknown_t*                         p_call_context;                                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .pCallContext
        _m020 class win::c_ctx_call_t*                         p_ctx_call;                                       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .pCtxCall
        _m021 class win::c_policy_set_t*                       p_ps;                                             //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .pPS
        _m022 void*                                            pv_pending_calls_front;                           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .pvPendingCallsFront
        _m023 void*                                            pv_pending_calls_back;                            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .pvPendingCallsBack
        _m024 class win::c_apt_call_ctrl_t*                    p_call_ctrl;                                      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .pCallCtrl
        _m025 class win::c_srv_call_state_t*                   p_top_scs;                                        //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .pTopSCS
        _m026 struct win::hwnd_t*                              hwnd_sta;                                         //{ +0x00c8    +0x00c0    +0x00c0    +0x00c0    } | .hwndSTA
        _m027 int32_t                                          c_orpc_nesting_level;                             //{ +0x00d0    +0x00c8    +0x00c8    +0x00c8    } | .cORPCNestingLevel
        _m028 uint32_t                                         c_debug_data;                                     //{ +0x00d4    +0x00cc    +0x00cc    +0x00cc    } | .cDebugData
        _m029 struct nt::guid_t                                logical_thread_id;                                //{ +0x00d8    +0x00d0    +0x00d0    +0x00d0    } | .LogicalThreadId
        _m030 void*                                            h_thread;                                         //{ +0x00e8    +0x00e0    +0x00e0    +0x00e0    } | .hThread
        _m031 void*                                            h_revert;                                         //{ +0x00f0    +0x00e8    +0x00e8    +0x00e8    } | .hRevert
        _m032 struct win::i_unknown_t*                         p_async_release;                                  //{ +0x00f8    +0x00f0    +0x00f0    +0x00f0    } | .pAsyncRelease
        _m033 struct win::hwnd_t*                              hwnd_dde_server;                                  //{ +0x0100    +0x00f8    +0x00f8    +0x00f8    } | .hwndDdeServer
        _m034 struct win::hwnd_t*                              hwnd_dde_client;                                  //{ +0x0108    +0x0100    +0x0100    +0x0100    } | .hwndDdeClient
        _m035 uint32_t                                         c_serve_dde_objects;                              //{ +0x0110    +0x0108    +0x0108    +0x0108    } | .cServeDdeObjects
        _m036 void*                                            p_stal_svrs_front;                                //{ +0x0118    +0x0110    +0x0110    +0x0110    } | .pSTALSvrsFront
        _m037 struct win::hwnd_t*                              hwnd_clip;                                        //{ +0x0120    +0x0118    +0x0118    +0x0118    } | .hwndClip
        _m038 struct win::i_data_object_t*                     p_data_obj_clip;                                  //{ +0x0128    +0x0120    +0x0120    +0x0120    } | .pDataObjClip
        _m039 uint32_t                                         dw_clip_seq_num;                                  //{ +0x0130    +0x0128    +0x0128    +0x0128    } | .dwClipSeqNum
        _m040 uint32_t                                         f_is_clip_wrapper;                                //{ +0x0134    +0x012c    +0x012c    +0x012c    } | .fIsClipWrapper
        _m041 struct win::i_unknown_t*                         punk_state;                                       //{ +0x0138    +0x0130    +0x0130    +0x0130    } | .punkState
        _m042 uint32_t                                         c_call_cancellation;                              //{ +0x0140    +0x0138    +0x0138    +0x0138    } | .cCallCancellation
        _m043 uint32_t                                         c_async_sends;                                    //{ +0x0144    +0x013c    +0x013c    +0x013c    } | .cAsyncSends
        _m044 class win::c_async_call_t*                       p_async_call_list;                                //{ +0x0148    +0x0140    +0x0140    +0x0140    } | .pAsyncCallList
        _m045 class win::c_surrogated_object_list_t*           p_surrogate_list;                                 //{ +0x0150    +0x0148    +0x0148    +0x0148    } | .pSurrogateList
        _m046 void*                                            p_rw_lock_tls_entry;                              //{ +0x0158    +0x0150    +0x0150    +0x0150    } | .pRWLockTlsEntry
        _m047 struct win::call_entry_buffer_t                  call_entry;                                       //{ +0x0160    +0x0158    +0x0158    +0x0158    } | .CallEntry
        _m048 struct tag::initialize_spy_node_t*               p_first_spy_reg;                                  //{ +0x0178    +0x0170    +0x0170    +0x0170    } | .pFirstSpyReg
        _m049 struct tag::initialize_spy_node_t*               p_first_free_spy_reg;                             //{ +0x0180    +0x0178    +0x0178    +0x0178    } | .pFirstFreeSpyReg
        _m050 class win::c_verifier_tls_data_t*                p_verifier_data;                                  //{ +0x0188    +0x0180    +0x0180    +0x0180    } | .pVerifierData
        _m051 uint32_t                                         dw_max_spy;                                       //{ +0x0190    +0x0188    +0x0188    +0x0188    } | .dwMaxSpy
        _m052 uint8_t                                          c_custom_marshaller_recursion;                    //{ +0x0194    +0x018c    +0x018c    +0x018c    } | .cCustomMarshallerRecursion
        _m053 void*                                            p_drag_cursors;                                   //{ +0x0198    +0x0190    +0x0190    +0x0190    } | .pDragCursors
        _m054 struct win::i_unknown_t*                         punk_error;                                       //{ +0x01a0    +0x0198    +0x0198    +0x0198    } | .punkError
        _m055 uint32_t                                         cb_error_data;                                    //{ +0x01a8    +0x01a0    +0x01a0    +0x01a0    } | .cbErrorData
        _m056 struct tag::outgoing_call_data_t                 outgoing_call_data;                               //{ +0x01ac    +0x01a4    +0x01a4    +0x01a4    } | .outgoingCallData
        _m057 struct tag::incoming_call_data_t                 incoming_call_data;                               //{ +0x01b4    +0x01ac    +0x01ac    +0x01ac    } | .incomingCallData
        _m058 struct tag::outgoing_activation_data_t           outgoing_activation_data;                         //{ +0x01b8    +0x01b0    +0x01b0    +0x01b0    } | .outgoingActivationData
        _m059 uint32_t                                         c_reentrancy_from_user_apc;                       //{ +0x01c8    +0x01c0    +0x01c0    +0x01c0    } | .cReentrancyFromUserAPC
        _m060 volatile uint32_t                                dw_cross_thread_flags;                            //{ +0x01d8    +0x01d0    +0x01d0    +0x01d0    } | .dwCrossThreadFlags
        _m061 uint32_t                                         dw_nested_rem_release;                            //{ +0x01dc    +0x01d4    +0x01d4    +0x01d4    } | .dwNestedRemRelease
        _m062 uint32_t                                         c_incoming_touched_asta_calls;                    //{ +0x01e0    +0x01d8    +0x01d8    +0x01d8    } | .cIncomingTouchedASTACalls
        _m063 class win::push_logical_thread_id_t*             p_top_pushed_logical_thread_id;                   //{ +0x01e8    +0x01e0    +0x01e0    +0x01e0    } | .pTopPushedLogicalThreadId
        _m064 uint32_t                                         i_xslock_owner_table_hint;                        //{ +0x01f0    +0x01e8    +0x01e8    +0x01e8    } | .iXslockOwnerTableHint
        _m065 enum win::oletls_prevent_rundown_mitigation_t    current_prevent_rundown_mitigation;               //{ +0x01f4    +0x01ec    +0x01ec    +0x01ec    } | .currentPreventRundownMitigation
        _m066 int32_t                                          f_owe_forced_bulk_update_for_current_mitigation;  //{ +0x01f8    +0x01f0    +0x01f0    +0x01f0    } | .fOweForcedBulkUpdateForCurrentMitigation
        _m067 struct win::i_unknown_t*                         p_clipboard_broker;                               //{ +0x0200    +0x01f8    +0x01f8    +0x01f8    } | .pClipboardBroker
        _m068 uint32_t                                         dw_activation_type;                               //{ +0x0208    +0x0200    +0x0200    +0x0200    } | .dwActivationType
        _m069 uint32_t                                         c_touched_astas_in_active_call;                   //{ +0x020c    +0x0204    +0x0204    +0x0204    } | .cTouchedAstasInActiveCall
        _m070 sdk::variant<uint64_t*, const uint64_t*>         p_touched_astas_in_active_call;                   //{ +0x0210    +0x0208    +0x0208    +0x0208    } | .pTouchedAstasInActiveCall
        _m071 class win::unmarshal_for_query_interface_t*      p_topmost_unmarshal_for_query_interface;          //{ +0x0218    +0x0210    +0x0210    +0x0210    } | .pTopmostUnmarshalForQueryInterface
                                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                     
        _m072 class win::modern_sta_wait_context_t*            p_modern_sta_wait_context;                        //{ +0x01c8    +0x01c8    +0x01c8    } | .pModernSTAWaitContext
        _m073 p_topmost_co_get_standard_marshal_in_progress_t  p_topmost_co_get_standard_marshal_in_progress;    //{ +0x0218    +0x0218    +0x0218    } | .pTopmostCoGetStandardMarshalInProgress
        _m074 const struct win::wire_container_this_t*         request_container_passthrough_data;               //{ +0x0220    +0x0220    +0x0220    } | .requestContainerPassthroughData
        _m075 uint32_t                                         request_container_passthrough_data_size;          //{ +0x0228    +0x0228    +0x0228    } | .requestContainerPassthroughDataSize
        _m076 int32_t                                          free_request_container_passthrough_data;          //{ +0x022c    +0x022c    +0x022c    } | .freeRequestContainerPassthroughData
        _m077 struct win::wire_container_that_t*               response_container_passthrough_data;              //{ +0x0230    +0x0230    +0x0230    } | .responseContainerPassthroughData
        _m078 uint32_t                                         response_container_passthrough_data_size;         //{ +0x0238    +0x0238    +0x0238    } | .responseContainerPassthroughDataSize
        _m079 enum win::com_tls_flags_t                        com_tls_flags;                                    //{ +0x023c    +0x023c    +0x023c    } | .comTlsFlags
                                                                                                               
        // Windows 10 v1607                                                                                    
        //                                                                                                     
        _m080 struct win::i_message_filter_t*                  p_msg_filter;                                     //{ +0x00c0    } | .pMsgFilter
        _m081 class win::asta_wait_context_t*                  p_asta_wait_context;                              //{ +0x01d0    } | .pASTAWaitContext
                                                                                                               
        SDK_MAGIC_PROPERTIES( "tagSOleTlsData.$", 0x248, true, 0x71692cd3c4398d4c );                                                
        SDK_DYNAMIC_SIZE( s_ole_tls_data_t );                                                                  
    };                                                                                                         
};
#include "magic/s_ole_tls_data_t.end.hpp"
