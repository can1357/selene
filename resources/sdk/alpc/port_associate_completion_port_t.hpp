#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_associate_completion_port_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PORT_ASSOCIATE_COMPLETION_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_associate_completion_port_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                         
        _m00 void* completion_key;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompletionKey
        _m01 void* completion_port;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionPort
                                           
        SDK_MAGIC_PROPERTIES( "_ALPC_PORT_ASSOCIATE_COMPLETION_PORT.$", 0x10, true, 0xfa011dfb69bcbf37 );                
        SDK_FIXED_SIZE( port_associate_completion_port_t, 0x10 );                
    };                                     
};
#include "magic/port_associate_completion_port_t.end.hpp"
SDK_VERIFY( struct alpc::port_associate_completion_port_t, 0x10 );
