#pragma once
#include <sdkgen/support_library.hpp>
#include "t_delay_type_t.hpp"
#include "t_buffer_type_t.hpp"
#include "t_corruption_pattern_t.hpp"
#include "t_corruption_size_type_t.hpp"
#include "t_corruption_distribution_type_t.hpp"

namespace rpc { struct message_t; }

#include "magic/t_rpc_verifier_settings_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;

    // [struct _tRpcVerifierSettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct t_rpc_verifier_settings_t                                                                
    {                                                                                               
        using test_corruption_inject_callback_t = sdk::function<void(enum win::t_buffer_type_t, uint32_t*, uint8_t**)>*;                                         
        using corruption_inject_t =               sdk::function<void(enum win::t_buffer_type_t, uint32_t*, uint8_t**)>*;                                         
        using ndr_return_corruption_inject_t =    sdk::function<void(struct win::midl_stub_message_t*)>*;                                         
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                          
        _m000 int32_t                                      f_fault_inject_impersonate_client;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fFaultInjectImpersonateClient
        _m001 uint32_t                                     prob_fault_inject_impersonate_client;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProbFaultInjectImpersonateClient
        _m002 uint32_t                                     delay_fault_inject_impersonate_client;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DelayFaultInjectImpersonateClient
        _m003 int32_t                                      f_corruption_inject_server_receives;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fCorruptionInjectServerReceives
        _m004 int32_t                                      f_corruption_inject_client_receives;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fCorruptionInjectClientReceives
        _m005 int32_t                                      f_corruption_inject_sends;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .fCorruptionInjectSends
        _m006 int32_t                                      f_corruption_inject_ndr_sends;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fCorruptionInjectNdrSends
        _m007 int32_t                                      f_corruption_inject_ndr_returns;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .fCorruptionInjectNdrReturns
        _m008 int32_t                                      f_corruption_inject_ndr;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .fCorruptionInjectNdr
        _m009 uint32_t                                     prob_rpc_header_corruption;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ProbRpcHeaderCorruption
        _m010 uint32_t                                     prob_data_corruption;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProbDataCorruption
        _m011 uint32_t                                     prob_secure_data_corruption;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ProbSecureDataCorruption
        _m012 enum win::t_corruption_pattern_t             corruption_pattern;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CorruptionPattern
        _m013 enum win::t_corruption_size_type_t           corruption_size_type;                      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CorruptionSizeType
        _m014 uint32_t                                     corruption_size;                           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CorruptionSize
        _m015 enum win::t_corruption_distribution_type_t   corruption_distribution_type;              //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .CorruptionDistributionType
        _m016 uint32_t                                     prob_buffer_truncation;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProbBufferTruncation
        _m017 uint32_t                                     max_buffer_truncation_size;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MaxBufferTruncationSize
        _m018 int32_t                                      f_fault_inject_transports;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .fFaultInjectTransports
        _m019 uint32_t                                     prob_fault_inject_transports;              //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .ProbFaultInjectTransports
        _m020 uint32_t                                     delay_fault_inject_transports;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DelayFaultInjectTransports
        _m021 int32_t                                      f_send_replay;                             //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .fSendReplay
        _m022 uint32_t                                     sent_buffer_list_size;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SentBufferListSize
        _m023 uint32_t                                     replay_frequency;                          //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ReplayFrequency
        _m024 int32_t                                      f_pause_inject;                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .fPauseInject
        _m025 enum win::t_delay_type_t                     pause_inject_interval_type;                //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .PauseInjectIntervalType
        _m026 uint32_t                                     pause_inject_interval_length;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PauseInjectIntervalLength
        _m027 enum win::t_delay_type_t                     pause_inject_pause_type;                   //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .PauseInjectPauseType
        _m028 uint32_t                                     pause_inject_pause_length;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PauseInjectPauseLength
        _m029 int32_t                                      f_pause_inject_external_ap_is;             //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .fPauseInjectExternalAPIs
        _m030 uint32_t                                     prob_pause_inject_external_ap_is;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ProbPauseInjectExternalAPIs
        _m031 uint32_t                                     pause_inject_external_ap_is_max_wait;      //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .PauseInjectExternalAPIsMaxWait
        _m032 int32_t                                      is_high_privilege;                         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .IsHighPrivilege
        _m033 int32_t                                      f_supress_app_verifier_breaks;             //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .fSupressAppVerifierBreaks
        _m034 test_corruption_inject_callback_t            test_corruption_inject_callback;           //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .TestCorruptionInjectCallback
        _m035 sdk::function<void(void*)>*                  ndr_corruption_callback;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NdrCorruptionCallback
        _m036 uint32_t                                     ndr_verifier_max_extension_factor;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NDRVerifierMaxExtensionFactor
        _m037 uint32_t                                     ndr_verifier_max_extension_buffer_length;  //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .NDRVerifierMaxExtensionBufferLength
        _m038 uint32_t                                     delay_corruption;                          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DelayCorruption
        _m039 sdk::function<void()>*                       initialize_rpc_shim;                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .InitializeRpcShim
        _m040 corruption_inject_t                          corruption_inject;                         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CorruptionInject
        _m041 sdk::function<void(struct rpc::message_t*)>* ndr_send_corruption_inject;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NDRSendCorruptionInject
        _m042 ndr_return_corruption_inject_t               ndr_return_corruption_inject;              //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .NDRReturnCorruptionInject
        _m043 sdk::function<int32_t(void*)>*               register_thread_for_pause_injection;       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .RegisterThreadForPauseInjection
        _m044 sdk::function<void(void*)>*                  unregister_thread_for_pause_injection;     //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .UnregisterThreadForPauseInjection
        _m045 sdk::function<void(void*)>*                  close_alpc_port;                           //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .CloseAlpcPort
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_tRpcVerifierSettings.$", 0xe0, true, 0x18610d2b44b31e6d );                                         
        SDK_FIXED_SIZE( t_rpc_verifier_settings_t, 0xe0 );                                          
    };                                                                                              
};
#include "magic/t_rpc_verifier_settings_t.end.hpp"
SDK_VERIFY( struct win::t_rpc_verifier_settings_t, 0xe0 );
