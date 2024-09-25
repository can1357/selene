#pragma once
#include <sdkgen/support_library.hpp>
#include "../ndis/halt_action_t.hpp"
#include "dispatch_table_header_t.hpp"

namespace ndis { struct filter_pause_parameters_t; }
namespace ndis { struct net_buffer_list_t;         }
namespace ndis { struct net_device_pnp_event_t;    }
namespace ndis { struct oid_request_t;             }
namespace ndis { struct status_indication_t;       }
namespace nt   { struct device_object_t;           }

#include "magic/ndis_dispatch_table_t.start.hpp"
namespace verf
{
    // [struct _VF_NDIS_DISPATCH_TABLE]
    // => Windows 10 v1607
    //
    struct ndis_dispatch_table_t                                                                                      
    {                                                                                                                 
        using ndis_allocate_verifier_context_t =                     sdk::function<int32_t(struct nt::device_object_t*, void*, void**, void**)>*;                                                   
        using ndis_miniport_oid_request_handler_t =                  sdk::function<int32_t(void*, struct ndis::oid_request_t*, void*, void*, sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*)>*;                                                   
        using ndis_m_oid_request_complete_t =                        sdk::function<void(void*, struct ndis::oid_request_t*, int32_t, void*, sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*)>*;                                                   
        using ndis_m_indicate_status_ex_t =                          sdk::function<void(void*, struct ndis::status_indication_t*, void*, sdk::function<void(void*, struct ndis::status_indication_t*)>*)>*;                                                   
        using ndis_miniport_device_pn_p_event_notify_handler_t =     sdk::function<void(void*, struct ndis::net_device_pnp_event_t*, void*, void*, sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*)>*;                                                   
        using ndis_miniport_halt_ex_handler_t =                      sdk::function<void(void*, enum ndis::halt_action_t, void*, void*, sdk::function<void(void*, enum ndis::halt_action_t)>*)>*;                                                   
        using ndis_miniport_send_net_buffer_lists_handler_t =        sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*;                                                   
        using ndis_m_send_net_buffer_lists_complete_t =              sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*;                                                   
        using ndis_filter_send_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*;                                                   
        using ndis_f_send_net_buffer_lists_complete_t =              sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*;                                                   
        using ndis_f_send_net_buffer_lists_t =                       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*;                                                   
        using ndis_filter_send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*;                                                   
        using ndis_filter_receive_net_buffer_lists_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*)>*;                                                   
        using ndis_f_return_net_buffer_lists_t =                     sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*;                                                   
        using ndis_f_indicate_receive_net_buffer_lists_t =           sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*)>*;                                                   
        using ndis_filter_return_net_buffer_lists_handler_t =        sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*;                                                   
        using ndis_filter_pause_handler_t =                          sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*, void*, sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*)>*)>*;                                                   
        using ndis_f_pause_complete_t =                              sdk::function<void(void*, void*, sdk::function<void(void*)>*)>*;                                                   
                                                                                                                      
        // Windows 10 v1607                                                                                           
        //                                                                                                            
        _m00 struct verf::dispatch_table_header_t                  header;                                              //{ +0x0000    } | .Header
        _m01 ndis_allocate_verifier_context_t                      ndis_allocate_verifier_context;                      //{ +0x0008    } | .NdisAllocateVerifierContext
        _m02 sdk::function<void(void*)>*                           ndis_free_verifier_context;                          //{ +0x0010    } | .NdisFreeVerifierContext
        _m03 ndis_miniport_oid_request_handler_t                   ndis_miniport_oid_request_handler;                   //{ +0x0018    } | .NdisMiniportOidRequestHandler
        _m04 ndis_m_oid_request_complete_t                         ndis_m_oid_request_complete;                         //{ +0x0020    } | .NdisMOidRequestComplete
        _m05 ndis_m_indicate_status_ex_t                           ndis_m_indicate_status_ex;                           //{ +0x0028    } | .NdisMIndicateStatusEx
        _m06 ndis_miniport_device_pn_p_event_notify_handler_t      ndis_miniport_device_pn_p_event_notify_handler;      //{ +0x0030    } | .NdisMiniportDevicePnPEventNotifyHandler
        _m07 ndis_miniport_halt_ex_handler_t                       ndis_miniport_halt_ex_handler;                       //{ +0x0038    } | .NdisMiniportHaltExHandler
        _m08 ndis_miniport_send_net_buffer_lists_handler_t         ndis_miniport_send_net_buffer_lists_handler;         //{ +0x0040    } | .NdisMiniportSendNetBufferListsHandler
        _m09 ndis_m_send_net_buffer_lists_complete_t               ndis_m_send_net_buffer_lists_complete;               //{ +0x0048    } | .NdisMSendNetBufferListsComplete
        _m10 ndis_filter_send_net_buffer_lists_handler_t           ndis_filter_send_net_buffer_lists_handler;           //{ +0x0050    } | .NdisFilterSendNetBufferListsHandler
        _m11 ndis_f_send_net_buffer_lists_complete_t               ndis_f_send_net_buffer_lists_complete;               //{ +0x0058    } | .NdisFSendNetBufferListsComplete
        _m12 ndis_f_send_net_buffer_lists_t                        ndis_f_send_net_buffer_lists;                        //{ +0x0060    } | .NdisFSendNetBufferLists
        _m13 ndis_filter_send_net_buffer_lists_complete_handler_t  ndis_filter_send_net_buffer_lists_complete_handler;  //{ +0x0068    } | .NdisFilterSendNetBufferListsCompleteHandler
        _m14 ndis_filter_receive_net_buffer_lists_handler_t        ndis_filter_receive_net_buffer_lists_handler;        //{ +0x0070    } | .NdisFilterReceiveNetBufferListsHandler
        _m15 ndis_f_return_net_buffer_lists_t                      ndis_f_return_net_buffer_lists;                      //{ +0x0078    } | .NdisFReturnNetBufferLists
        _m16 ndis_f_indicate_receive_net_buffer_lists_t            ndis_f_indicate_receive_net_buffer_lists;            //{ +0x0080    } | .NdisFIndicateReceiveNetBufferLists
        _m17 ndis_filter_return_net_buffer_lists_handler_t         ndis_filter_return_net_buffer_lists_handler;         //{ +0x0088    } | .NdisFilterReturnNetBufferListsHandler
        _m18 ndis_filter_pause_handler_t                           ndis_filter_pause_handler;                           //{ +0x0090    } | .NdisFilterPauseHandler
        _m19 ndis_f_pause_complete_t                               ndis_f_pause_complete;                               //{ +0x0098    } | .NdisFPauseComplete
                                                                                                                      
        SDK_MAGIC_PROPERTIES( "_VF_NDIS_DISPATCH_TABLE.$", 0x0, false, 0xeb3a4d4a1e56d65c );                                                   
        SDK_FIXED_SIZE( ndis_dispatch_table_t, 0xa0 );                                                                
    };                                                                                                                
};
#include "magic/ndis_dispatch_table_t.end.hpp"
SDK_VERIFY( struct verf::ndis_dispatch_table_t, 0xa0 );
