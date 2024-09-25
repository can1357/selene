#pragma once
#include <sdkgen/support_library.hpp>
#include "kalpc_direct_event_t.hpp"
#include "kalpc_work_on_behalf_data_t.hpp"

#include "magic/kalpc_message_attributes_t.start.hpp"
namespace nt
{
    struct kalpc_view_t;
    struct kalpc_handle_data_t;
    struct kalpc_security_data_t;

    // [struct _KALPC_MESSAGE_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_message_attributes_t                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                              
        _m00 void*                                  client_context;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientContext
        _m01 void*                                  server_context;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServerContext
        _m02 void*                                  port_context;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PortContext
        _m03 void*                                  cancel_port_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CancelPortContext
        _m04 struct nt::kalpc_security_data_t*      security_data;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SecurityData
        _m05 struct nt::kalpc_view_t*               view;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .View
        _m06 struct nt::kalpc_handle_data_t*        handle_data;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HandleData
        _m07 union nt::kalpc_direct_event_t         direct_event;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DirectEvent
        _m08 struct nt::kalpc_work_on_behalf_data_t work_on_behalf_data;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WorkOnBehalfData
                                                                        
        SDK_MAGIC_PROPERTIES( "_KALPC_MESSAGE_ATTRIBUTES.$", 0x48, true, 0x4467ca3b27a616d8 );                    
        SDK_FIXED_SIZE( kalpc_message_attributes_t, 0x48 );                    
    };                                                                  
};
#include "magic/kalpc_message_attributes_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_message_attributes_t, 0x48 );
