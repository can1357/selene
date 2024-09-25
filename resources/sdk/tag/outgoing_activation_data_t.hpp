#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/outgoing_activation_data_t.start.hpp"
namespace tag
{
    // [struct tagOutgoingActivationData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct outgoing_activation_data_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::guid_t guid_server;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guidServer
                                           
        SDK_MAGIC_PROPERTIES( "tagOutgoingActivationData.$", 0x10, true, 0x53c0f78b6082ac28 );            
        SDK_FIXED_SIZE( outgoing_activation_data_t, 0x10 );            
    };                                     
};
#include "magic/outgoing_activation_data_t.end.hpp"
SDK_VERIFY( struct tag::outgoing_activation_data_t, 0x10 );
