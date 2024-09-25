#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/protocol_co_characteristics_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;
    struct co_address_family_t;
    struct status_indication_t;

    // [struct _NDIS_PROTOCOL_CO_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_co_characteristics_t                                                            
    {                                                                                               
        using co_status_handler_ex_t =                      sdk::function<void(void*, void*, struct ndis::status_indication_t*)>*;                                          
        using co_af_register_notify_handler_t =             sdk::function<void(void*, struct ndis::co_address_family_t*)>*;                                          
        using co_receive_net_buffer_lists_handler_t =       sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                          
        using co_send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                          
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                          
        _m00 struct ndis::object_header_t                 header;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                     flags;                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 co_status_handler_ex_t                       co_status_handler_ex;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CoStatusHandlerEx
        _m03 co_af_register_notify_handler_t              co_af_register_notify_handler;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CoAfRegisterNotifyHandler
        _m04 co_receive_net_buffer_lists_handler_t        co_receive_net_buffer_lists_handler;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CoReceiveNetBufferListsHandler
        _m05 co_send_net_buffer_lists_complete_handler_t  co_send_net_buffer_lists_complete_handler;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CoSendNetBufferListsCompleteHandler
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_PROTOCOL_CO_CHARACTERISTICS.$", 0x28, true, 0xa62a12bae5ce8e63 );                                          
        SDK_FIXED_SIZE( protocol_co_characteristics_t, 0x28 );                                          
    };                                                                                              
};
#include "magic/protocol_co_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::protocol_co_characteristics_t, 0x28 );
