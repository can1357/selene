#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "which_transfer_syntax_t.hpp"
#include "async_operation_storage_t.hpp"
#include "transport_and_server_calls_t.hpp"
#include "async_client_call_retry_context_t.hpp"
#include "winrt_async_channel_operation_info_t.hpp"

#include "magic/winrt_async_channel_operation_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    struct i_stub_call_t;

    // [class WinrtAsyncChannelOperation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_channel_operation_t                                                                         
    {                                                                                                             
        using channel_operation_info_t = const class win::winrt_async_channel_operation_info_t;                                                       
                                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
        //                                                                                                        
        _m000 channel_operation_info_t                     channel_operation_info;                                  //{ +0x0100    +0x0100    +0x0100    +0x0100    } | ._channelOperationInfo
        _m001 struct win::i_stub_call_t const*             proxy_stub_call;                                         //{ +0x0188    +0x0188    +0x0188    +0x0188    } | ._proxyStubCall
        _m002 const uint32_t                               dw_transport_call_creation_state;                        //{ +0x0190    +0x0190    +0x0190    +0x0190    } | ._dwTransportCallCreationState
        _m003 const uint32_t                               call_trace_id;                                           //{ +0x0194    +0x0194    +0x0194    +0x0194    } | ._callTraceId
        _m004 class win::oxid_entry_t const*               p_server_oxid_entry;                                     //{ +0x01a0    +0x01c8    +0x01c8    +0x01c8    } | ._pServerOxidEntry
        _m005 const struct nt::guid_t                      server_ipid;                                             //{ +0x01a8    +0x01d0    +0x01d0    +0x01d0    } | ._serverIpid
        _m006 const struct nt::guid_t                      server_moid_for_tracing;                                 //{ +0x01b8    +0x01e0    +0x01e0    +0x01e0    } | ._serverMoidForTracing
        _m007 const struct nt::guid_t                      dcom_causality_id;                                       //{ +0x01c8    +0x01f0    +0x01f0    +0x01f0    } | ._dcomCausalityId
        _m008 enum win::which_transfer_syntax_t            which_transfer_syntax;                                   //{ +0x01d8    +0x0210    +0x0210    +0x0210    } | ._whichTransferSyntax
        _m009 class win::async_client_call_retry_context_t retry_context;                                           //{ +0x01e0    +0x0218    +0x0218    +0x0218    } | ._retryContext
        _m010 struct win::transport_and_server_calls_t     transport_and_server_calls;                              //{ +0x0230    +0x0270    +0x0270    +0x0270    } | ._transportAndServerCalls
        _m011 bool                                         subscribed_server_transport_call_events;                 //{ +0x0240    +0x0280    +0x0280    +0x0280    } | ._subscribedServerTransportCallEvents
        _m012 bool                                         used_non_default_association;                            //{ +0x0241    +0x0281    +0x0281    +0x0281    } | ._usedNonDefaultAssociation
        _m013 class win::async_operation_storage_t         real_operation;                                          //{ +0x0260    +0x02a0    +0x02a0    +0x02a0    } | ._realOperation
        _m014 uint32_t                                     real_operation_stub_data_length;                         //{ +0x0280    +0x02c0    +0x02c0    +0x02c0    } | ._realOperationStubDataLength
        _m015 bool                                         cancel_real_operation_when_started;                      //{ +0x0290    +0x02d0    +0x02d0    +0x02d0    } | ._cancelRealOperationWhenStarted
        _m016 bool                                         handled_failure_to_create_operation_object;              //{ +0x0291    +0x02d1    +0x02d1    +0x02d1    } | ._handledFailureToCreateOperationObject
        _m017 bool                                         have_container_id;                                       //{ +0x0292    +0x02d2    +0x02d2    +0x02d2    } | ._haveContainerId
        _m018 struct nt::guid_t                            container_id;                                            //{ +0x0294    +0x02d4    +0x02d4    +0x02d4    } | ._containerId
        _m019 volatile uint32_t                            c_get_results_called;                                    //{ +0x02a4    +0x02e4    +0x02e4    +0x02e4    } | ._cGetResultsCalled
        _m020 uint32_t                                     sequence_number_of_facade_passed_to_completed_delegate;  //{ +0x02ac    +0x02ec    +0x02ec    +0x02ec    } | ._sequenceNumberOfFacadePassedToCompletedDelegate
        _m021 bool                                         is_client_transport_completion_received;                 //{ +0x02c0    +0x0300    +0x0300    +0x0300    } | ._isClientTransportCompletionReceived
        _m022 void volatile*                               p_result_data;                                           //{ +0x02c8    +0x0318    +0x0318    +0x0318    } | ._pResultData
        _m023 uint32_t                                     cb_result_data;                                          //{ +0x02d0    +0x0320    +0x0320    +0x0320    } | ._cbResultData
        _m024 uint64_t                                     marshaling_set_id;                                       //{ +0x02d8    +0x0328    +0x0328    +0x0328    } | ._marshalingSetId
        _m025 bool                                         cancel_was_called;                                       //{ +0x02ea    +0x0332    +0x0332    +0x0332    } | ._cancelWasCalled
        _m026 bool                                         did_verifier_stop_for_failure_to_call_get_results;       //{ +0x02eb    +0x0333    +0x0333    +0x0333    } | ._didVerifierStopForFailureToCallGetResults
        _m027 bool                                         successfully_sent_call;                                  //{ +0x02ec    +0x0334    +0x0334    +0x0334    } | ._successfullySentCall
                                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
        //                                                                                                        
        _m028 const struct nt::guid_t                      passthrough_trace_activity;                              //{ +0x0198    +0x0198    +0x0198    } | ._passthroughTraceActivity
        _m029 const bool                                   enable_call_tracing;                                     //{ +0x01a8    +0x01a8    +0x01a8    } | ._enableCallTracing
        _m030 const struct nt::guid_t                      call_id;                                                 //{ +0x01ac    +0x01ac    +0x01ac    } | ._callId
        _m031 const uint32_t                               client_pid;                                              //{ +0x0200    +0x0200    +0x0200    } | ._clientPid
        _m032 struct nt::guid_t                            completion_trace_activity;                               //{ +0x0304    +0x0304    +0x0304    } | ._completionTraceActivity
                                                                                                                  
        // Windows 10 v1607                                                                                       
        //                                                                                                        
        _m033 uint64_t                                     marshaling_set_acknowledgment_oxid;                      //{ +0x02e0    } | ._marshalingSetAcknowledgmentOxid
                                                                                                                  
        SDK_MAGIC_PROPERTIES( "WinrtAsyncChannelOperation.$", 0x348, true, 0x771eafbd98b2a423 );                                                       
        SDK_DYNAMIC_SIZE( winrt_async_channel_operation_t );                                                       
    };                                                                                                            
};
#include "magic/winrt_async_channel_operation_t.end.hpp"
