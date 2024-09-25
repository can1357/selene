#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "c_dest_object_t.hpp"
#include "../tag/callcategory_t.hpp"
#include "../tag/rpcolemessage_t.hpp"
#include "response_message_type_t.hpp"

#include "magic/c_message_call_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    struct wire_that_t;
    struct wire_this_t;
    struct wire_local_that_t;
    struct wire_local_this_t;
    struct midl_xmit_defs_0001_t;
    struct wire_container_that_t;
    struct wire_container_this_t;
    class marshaled_handle_storage_t;
    struct wire_winrt_async_call_response_block_part1_t;

    // [class CMessageCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_message_call_t                                                                                           
    {                                                                                                                
        using dest_obj_t =                          sdk::variant<const class win::c_dest_object_t, class win::c_dest_object_t>;                                                              
        using marshaled_handles_t =                 sdk::array<class win::marshaled_handle_storage_t*, 2>;                                                              
        using server_winrt_async_response_block_t = struct win::wire_winrt_async_call_response_block_part1_t*;                                                              
                                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                                                           
        _m000 const enum tag::callcategory_t           callcat;                                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._callcat
        _m001 sdk::variant<int32_t, sdk::hresult>      h_result;                                                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._hResult
        _m002 const struct nt::guid_t                  ipid;                                                           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._ipid
        _m003 void*                                    h_sxs_act_ctx;                                                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._hSxsActCtx
        _m004 dest_obj_t                               dest_obj;                                                       //{ +0x0040    +0x0038    +0x0038    +0x0038    } | ._destObj
        _m005 void*                                    h_rpc;                                                          //{ +0x0070    +0x0068    +0x0068    +0x0068    } | ._hRpc
        _m006 const struct nt::guid_t                  iid_wire;                                                       //{ +0x00d8    +0x0078    +0x0078    +0x0078    } | ._iidWire
        _m007 uint32_t                                 dw_server_tid;                                                  //{ +0x00fc    +0x0088    +0x0088    +0x0088    } | ._dwServerTid
        _m008 const uint16_t                           i_method_wire;                                                  //{ +0x0100    +0x008c    +0x008c    +0x008c    } | ._iMethodWire
        _m009 struct tag::rpcolemessage_t              message;                                                        //{ +0x0088    +0x0090    +0x0090    +0x0090    } | .message
        _m010 uint32_t                                 m_ul_cancel_timeout;                                            //{ +0x0118    +0x00e0    +0x00e0    +0x00e0    } | .m_ulCancelTimeout
        _m011 uint64_t                                 m_dw_cancel_start_count;                                        //{ +0x0120    +0x00e8    +0x00e8    +0x00e8    } | .m_dwCancelStartCount
        _m012 uint1_t                                  b_checked_client_is_app_container;                              //{ +0x0128@0  +0x00f0@0  +0x00f0@0  +0x00f0@0  } | ._bCheckedClientIsAppContainer
        _m013 uint1_t                                  b_client_is_app_container;                                      //{ +0x0128@1  +0x00f0@1  +0x00f0@1  +0x00f0@1  } | ._bClientIsAppContainer
        _m014 uint1_t                                  b_server_is_app_container;                                      //{ +0x0128@2  +0x00f0@2  +0x00f0@2  +0x00f0@2  } | ._bServerIsAppContainer
        _m015 uint1_t                                  b_checked_client_is_rpcss;                                      //{ +0x0128@3  +0x00f0@3  +0x00f0@3  +0x00f0@3  } | ._bCheckedClientIsRpcss
        _m016 uint1_t                                  b_client_is_rpcss;                                              //{ +0x0128@4  +0x00f0@4  +0x00f0@4  +0x00f0@4  } | ._bClientIsRpcss
        _m017 uint1_t                                  b_checked_client_is_suspendable_by_any_lifecycle_manager;       //{ +0x0128@5  +0x00f0@5  +0x00f0@5  +0x00f0@5  } | ._bCheckedClientIsSuspendableByAnyLifecycleManager
        _m018 uint1_t                                  b_client_is_suspendable_by_any_lifecycle_manager;               //{ +0x0128@6  +0x00f0@6  +0x00f0@6  +0x00f0@6  } | ._bClientIsSuspendableByAnyLifecycleManager
        _m019 uint1_t                                  b_enabled_inproc_out_parameter_mitigation;                      //{ +0x0148@0  +0x0138@0  +0x0138@0  +0x0138@0  } | ._bEnabledInprocOutParameterMitigation
        _m020 uint1_t                                  b_checked_conditions_for_outofproc_out_parameter_mitigation;    //{ +0x0148@1  +0x0138@1  +0x0138@1  +0x0138@1  } | ._bCheckedConditionsForOutofprocOutParameterMitigation
        _m021 uint1_t                                  b_should_enable_outofproc_out_parameter_mitigation;             //{ +0x0148@2  +0x0138@2  +0x0138@2  +0x0138@2  } | ._bShouldEnableOutofprocOutParameterMitigation
        _m022 uint1_t                                  b_override_enable_outofproc_out_parameter_mitigation;           //{ +0x0148@3  +0x0138@3  +0x0138@3  +0x0138@3  } | ._bOverrideEnableOutofprocOutParameterMitigation
        _m023 uint1_t                                  b_scheduled_acknowlegment_of_out_parameter_marshaling_set;      //{ +0x0148@4  +0x0138@4  +0x0138@4  +0x0138@4  } | ._bScheduledAcknowlegmentOfOutParameterMarshalingSet
        _m024 class win::oxid_entry_t*                 p_server_oxid_entry;                                            //{ +0x0150    +0x0140    +0x0140    +0x0140    } | ._pServerOXIDEntry
        _m025 uint64_t                                 pre_get_buffer_out_of_proc_marshaling_set_id;                   //{ +0x0158    +0x0148    +0x0148    +0x0148    } | ._preGetBufferOutOfProcMarshalingSetId
        _m026 uint64_t                                 m_dw_start_count;                                               //{ +0x0180    +0x0168    +0x0168    +0x0168    } | .m_dwStartCount
        _m027 marshaled_handles_t                      marshaled_handles;                                              //{ +0x0188    +0x0170    +0x0170    +0x0170    } | ._marshaledHandles
        _m028 void*                                    p_header;                                                       //{ +0x0050    +0x01b8    +0x01b8    +0x01b8    } | ._pHeader
        _m029 uint32_t                                 server_fault;                                                   //{ +0x0038    +0x01c0    +0x01c0    +0x01c0    } | ._server_fault
        _m030 struct nt::guid_t                        guid_causality;                                                 //{ +0x00e8    +0x01c4    +0x01c4    +0x01c4    } | ._guidCausality
        _m031 struct nt::guid_t                        guid_container_id;                                              //{ +0x0104    +0x01d4    +0x01d4    +0x01d4    } | ._guidContainerId
                                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                                                           
        _m032 const struct nt::guid_t                  passthrough_trace_activity;                                     //{ +0x00f4    +0x00f4    +0x00f4    } | ._passthroughTraceActivity
        _m033 const struct nt::guid_t                  call_id;                                                        //{ +0x0110    +0x0110    +0x0110    } | ._callId
        _m034 const uint32_t                           retry_count;                                                    //{ +0x0120    +0x0120    +0x0120    } | ._retryCount
        _m035 const struct win::wire_container_this_t* request_container_passthrough_data;                             //{ +0x0198    +0x0198    +0x0198    } | ._requestContainerPassthroughData
        _m036 uint32_t                                 request_container_passthrough_data_size;                        //{ +0x01a0    +0x01a0    +0x01a0    } | ._requestContainerPassthroughDataSize
        _m037 bool                                     use_container_error_information_local_propagation;              //{ +0x01a4    +0x01a4    +0x01a4    } | ._useContainerErrorInformationLocalPropagation
        _m038 enum win::response_message_type_t        response_message_type;                                          //{ +0x01a8    +0x01a8    +0x01a8    } | ._responseMessageType
        _m039 const struct win::wire_this_t*           orpc_this;                                                      //{ +0x01e8    +0x01e8    +0x01e8    } | ._orpcThis
        _m040 uint32_t                                 size_of_orpc_this;                                              //{ +0x01f0    +0x01f0    +0x01f0    } | ._sizeOfOrpcThis
        _m041 const struct win::wire_container_this_t* container_this;                                                 //{ +0x01f8    +0x01f8    +0x01f8    } | ._containerThis
        _m042 uint32_t                                 size_of_container_this;                                         //{ +0x0200    +0x0200    +0x0200    } | ._sizeOfContainerThis
        _m043 const struct win::wire_local_this_t*     local_this;                                                     //{ +0x0208    +0x0208    +0x0208    } | ._localThis
        _m044 uint32_t                                 size_of_local_this;                                             //{ +0x0210    +0x0210    +0x0210    } | ._sizeOfLocalThis
        _m045 const void*                              request_stub_data;                                              //{ +0x0218    +0x0218    +0x0218    } | ._requestStubData
        _m046 uint32_t                                 size_of_request_stub_data;                                      //{ +0x0220    +0x0220    +0x0220    } | ._sizeOfRequestStubData
        _m047 uint32_t*                                client_local_this_flags;                                        //{ +0x0228    +0x0228    +0x0228    } | ._clientLocalThisFlags
        _m048 struct win::midl_xmit_defs_0001_t*       client_winrt_async_request_block;                               //{ +0x0230    +0x0230    +0x0230    } | ._clientWinrtAsyncRequestBlock
        _m049 const struct win::wire_that_t*           orpc_that;                                                      //{ +0x0238    +0x0238    +0x0238    } | ._orpcThat
        _m050 uint32_t                                 size_of_orpc_that;                                              //{ +0x0240    +0x0240    +0x0240    } | ._sizeOfOrpcThat
        _m051 const struct win::wire_local_that_t*     local_that;                                                     //{ +0x0248    +0x0248    +0x0248    } | ._localThat
        _m052 uint32_t                                 size_of_local_that;                                             //{ +0x0250    +0x0250    +0x0250    } | ._sizeOfLocalThat
        _m053 const struct win::wire_container_that_t* container_that;                                                 //{ +0x0258    +0x0258    +0x0258    } | ._containerThat
        _m054 uint32_t                                 size_of_container_that;                                         //{ +0x0260    +0x0260    +0x0260    } | ._sizeOfContainerThat
        _m055 const void*                              response_stub_data;                                             //{ +0x0268    +0x0268    +0x0268    } | ._responseStubData
        _m056 uint32_t                                 size_of_response_stub_data;                                     //{ +0x0270    +0x0270    +0x0270    } | ._sizeOfResponseStubData
        _m057 uint64_t*                                pointer_to_server_marshaling_set_id;                            //{ +0x0278    +0x0278    +0x0278    } | ._pointerToServerMarshalingSetId
        _m058 server_winrt_async_response_block_t      server_winrt_async_response_block;                              //{ +0x0280    +0x0280    +0x0280    } | ._serverWinrtAsyncResponseBlock
        _m059 void*                                    server_response_stub_data;                                      //{ +0x0288    +0x0288    +0x0288    } | ._serverResponseStubData
        _m060 bool                                     relinquished_marshaling_set;                                    //{ +0x0290    +0x0290    +0x0290    } | ._relinquishedMarshalingSet
                                                                                                                     
        // Windows 10 v1607                                                                                          
        //                                                                                                           
        _m061 struct win::wire_local_this_t*           p_local_this;                                                   //{ +0x0058    } | ._pLocalThis
        _m062 struct win::wire_local_that_t*           p_local_that;                                                   //{ +0x0060    } | ._pLocalThat
        _m063 uint32_t                                 dw_com_header_size;                                             //{ +0x0080    } | ._dwCOMHeaderSize
        _m064 uint32_t                                 dw_server_pid;                                                  //{ +0x00f8    } | ._dwServerPid
        _m065 uint32_t                                 dw_error_buf_size;                                              //{ +0x0114    } | ._dwErrorBufSize
        _m066 uint64_t                                 pre_get_buffer_out_of_proc_marshaling_set_acknowledgment_oxid;  //{ +0x0160    } | ._preGetBufferOutOfProcMarshalingSetAcknowledgmentOxid
                                                                                                                     
        // Windows 11                                                                                                
        //                                                                                                           
        _m067 uint32_t                                 extensions_dest_ctx_override;                                   //{ +0x0294    } | ._extensionsDestCtxOverride
                                                                                                                     
        SDK_MAGIC_PROPERTIES( "CMessageCall.$", 0x2a0, true, 0x181742e69b0f41b8 );                                                              
        SDK_DYNAMIC_SIZE( c_message_call_t );                                                                        
    };                                                                                                               
};
#include "magic/c_message_call_t.end.hpp"
