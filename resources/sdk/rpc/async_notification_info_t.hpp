#pragma once
#include <sdkgen/support_library.hpp>
#include "async_event_t.hpp"

namespace win { struct overlapped_t; }

#include "magic/async_notification_info_t.start.hpp"
namespace rpc
{
    struct async_state_t;

    // [union _RPC_ASYNC_NOTIFICATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union async_notification_info_t                                                            
    {                                                                                          
        struct u0_apc_t                                                                        
        {                                                                                      
            using pfn_rpcnotification_routine_t = sdk::function<void(struct rpc::async_state_t*, void*, enum rpc::async_event_t)>*;                                          
                                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                                 
            _m00 pfn_rpcnotification_routine_t  notification_routine;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationRoutine
            _m01 void*                          h_thread;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hThread
                                                                                               
            SDK_MAGIC_PROPERTIES( "_RPC_ASYNC_NOTIFICATION_INFO.APC.$", 0x10, true, 0x11e98cdcc426313a );                                          
            SDK_FIXED_SIZE( u0_apc_t, 0x10 );                                                  
        };                                                                                     
                                                                                               
        struct u4_ioc_t                                                                        
        {                                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
            //                                                                                 
            _m03 void*                     h_io_port;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hIOPort
            _m04 uint32_t                  dw_number_of_bytes_transferred;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwNumberOfBytesTransferred
            _m05 uint64_t                  dw_completion_key;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwCompletionKey
            _m06 struct win::overlapped_t* lp_overlapped;                                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpOverlapped
                                                                                               
            SDK_MAGIC_PROPERTIES( "_RPC_ASYNC_NOTIFICATION_INFO.IOC.$", 0x20, true, 0xf4b8bb790c827c09 );                                                    
            SDK_FIXED_SIZE( u4_ioc_t, 0x20 );                                                    
        };                                                                                     
                                                                                               
        using pfn_rpcnotification_routine_t = sdk::function<void(struct rpc::async_state_t*, void*, enum rpc::async_event_t)>*;                     
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                                     
        _m02 u0_apc_t                                                     apc;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .APC
        _m07 u4_ioc_t                                                     ioc;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IOC
        _m08 void*                                                        h_event;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hEvent
        _m09 pfn_rpcnotification_routine_t                                notification_routine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationRoutine
                                                                                               
        SDK_MAGIC_PROPERTIES( "_RPC_ASYNC_NOTIFICATION_INFO.$", 0x20, true, 0xe804404f0422afd1 );                     
        SDK_FIXED_SIZE( async_notification_info_t, 0x20 );                                     
    };                                                                                         
};
#include "magic/async_notification_info_t.end.hpp"
SDK_VERIFY( struct rpc::async_notification_info_t::u0_apc_t, 0x10 );
SDK_VERIFY( struct rpc::async_notification_info_t::u4_ioc_t, 0x20 );
SDK_VERIFY( union rpc::async_notification_info_t, 0x20 );
