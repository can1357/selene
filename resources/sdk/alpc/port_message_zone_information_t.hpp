#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_message_zone_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_PORT_MESSAGE_ZONE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_message_zone_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 void*    buffer;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t size;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                                          
        SDK_MAGIC_PROPERTIES( "_ALPC_PORT_MESSAGE_ZONE_INFORMATION.$", 0x10, true, 0x1a44442ef297c7f7 );       
        SDK_FIXED_SIZE( port_message_zone_information_t, 0x10 );       
    };                                    
};
#include "magic/port_message_zone_information_t.end.hpp"
SDK_VERIFY( struct alpc::port_message_zone_information_t, 0x10 );
