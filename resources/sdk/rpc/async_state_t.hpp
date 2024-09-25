#pragma once
#include <sdkgen/support_library.hpp>
#include "async_event_t.hpp"
#include "notification_types_t.hpp"
#include "async_notification_info_t.hpp"

#include "magic/async_state_t.start.hpp"
namespace rpc
{
    // [struct _RPC_ASYNC_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_state_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                          
        _m00 uint32_t                             size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                             signature;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Signature
        _m02 int32_t                              lock;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
        _m03 uint32_t                             flags;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 void*                                stub_info;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StubInfo
        _m05 void*                                user_info;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .UserInfo
        _m06 void*                                runtime_info;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RuntimeInfo
        _m07 enum rpc::async_event_t              event;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Event
        _m08 enum rpc::notification_types_t       notification_type;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .NotificationType
        _m09 union rpc::async_notification_info_t u;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .u
                                                                    
        SDK_MAGIC_PROPERTIES( "_RPC_ASYNC_STATE.$", 0x70, true, 0x4af9171fe978f76f );                  
        SDK_FIXED_SIZE( async_state_t, 0x70 );                      
    };                                                              
};
#include "magic/async_state_t.end.hpp"
SDK_VERIFY( struct rpc::async_state_t, 0x70 );
