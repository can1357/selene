#pragma once
#include <sdkgen/support_library.hpp>
#include "reference_ex_t.hpp"
#include "object_header_t.hpp"
#include "filter_driver_characteristics_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/filter_driver_block_t.start.hpp"
namespace ndis
{
    struct filter_block_t;
    struct net_buffer_list_t;
    struct filter_driver_block_t;
    struct miniport_offload_block_list_t;
    struct protocol_offload_block_list_t;

    // [struct _NDIS_FILTER_DRIVER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_driver_block_t                                                                      
    {                                                                                                 
        using tcp_offload_receive_return_handler_t =      sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using initiate_offload_complete_handler_t =       sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using terminate_offload_complete_handler_t =      sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using update_offload_complete_handler_t =         sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using invalidate_offload_complete_handler_t =     sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using query_offload_complete_handler_t =          sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using indicate_offload_event_handler_t =          sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*;                                        
        using tcp_offload_send_complete_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_disconnect_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_forward_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_indicate_handler_t =    sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                        
        using initiate_offload_handler_t =                sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                        
        using terminate_offload_handler_t =               sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                        
        using update_offload_handler_t =                  sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                        
        using invalidate_offload_handler_t =              sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                        
        using query_offload_handler_t =                   sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                        
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 struct ndis::object_header_t                    header;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 struct ndis::filter_driver_block_t*             next_filter_driver;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextFilterDriver
        _m002 struct nt::driver_object_t*                     driver_object;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DriverObject
        _m003 struct ndis::filter_block_t*                    filter_queue;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FilterQueue
        _m004 void*                                           filter_driver_context;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FilterDriverContext
        _m005 uint64_t                                        lock;                                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Lock
        _m006 uint32_t                                        flags;                                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Flags
        _m007 nt::list_entry_t                                device_list;                              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DeviceList
        _m008 struct ndis::reference_ex_t                     ref;                                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Ref
        _m009 struct ndis::filter_driver_characteristics_t    default_filter_characteristics;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DefaultFilterCharacteristics
        _m010 nt::unicode_view                                image_name;                               //{ +0x01d8    +0x0160    +0x0158    +0x0160    } | .ImageName
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                        
        //                                                                                            
        _m011 tcp_offload_receive_return_handler_t            tcp_offload_receive_return_handler;       //{ +0x01c8    +0x0150    +0x0150    } | .TcpOffloadReceiveReturnHandler
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m012 initiate_offload_complete_handler_t             initiate_offload_complete_handler;        //{ +0x0140    } | .InitiateOffloadCompleteHandler
        _m013 terminate_offload_complete_handler_t            terminate_offload_complete_handler;       //{ +0x0148    } | .TerminateOffloadCompleteHandler
        _m014 update_offload_complete_handler_t               update_offload_complete_handler;          //{ +0x0150    } | .UpdateOffloadCompleteHandler
        _m015 invalidate_offload_complete_handler_t           invalidate_offload_complete_handler;      //{ +0x0158    } | .InvalidateOffloadCompleteHandler
        _m016 query_offload_complete_handler_t                query_offload_complete_handler;           //{ +0x0160    } | .QueryOffloadCompleteHandler
        _m017 indicate_offload_event_handler_t                indicate_offload_event_handler;           //{ +0x0168    } | .IndicateOffloadEventHandler
        _m018 tcp_offload_send_complete_handler_t             tcp_offload_send_complete_handler;        //{ +0x0170    } | .TcpOffloadSendCompleteHandler
        _m019 tcp_offload_receive_complete_handler_t          tcp_offload_receive_complete_handler;     //{ +0x0178    } | .TcpOffloadReceiveCompleteHandler
        _m020 tcp_offload_disconnect_complete_handler_t       tcp_offload_disconnect_complete_handler;  //{ +0x0180    } | .TcpOffloadDisconnectCompleteHandler
        _m021 tcp_offload_forward_complete_handler_t          tcp_offload_forward_complete_handler;     //{ +0x0188    } | .TcpOffloadForwardCompleteHandler
        _m022 sdk::function<void(void*, uint32_t, uint32_t)>* tcp_offload_event_handler;                //{ +0x0190    } | .TcpOffloadEventHandler
        _m023 tcp_offload_receive_indicate_handler_t          tcp_offload_receive_indicate_handler;     //{ +0x0198    } | .TcpOffloadReceiveIndicateHandler
        _m024 initiate_offload_handler_t                      initiate_offload_handler;                 //{ +0x01a0    } | .InitiateOffloadHandler
        _m025 terminate_offload_handler_t                     terminate_offload_handler;                //{ +0x01a8    } | .TerminateOffloadHandler
        _m026 update_offload_handler_t                        update_offload_handler;                   //{ +0x01b0    } | .UpdateOffloadHandler
        _m027 invalidate_offload_handler_t                    invalidate_offload_handler;               //{ +0x01b8    } | .InvalidateOffloadHandler
        _m028 query_offload_handler_t                         query_offload_handler;                    //{ +0x01c0    } | .QueryOffloadHandler
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_DRIVER_BLOCK.$", 0x170, true, 0x799ca66ae7537284 );                                        
        SDK_DYNAMIC_SIZE( filter_driver_block_t );                                                    
    };                                                                                                
};
#include "magic/filter_driver_block_t.end.hpp"
