#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/message_attributes_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_MESSAGE_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct message_attributes_t            
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t allocated_attributes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedAttributes
        _m01 uint32_t valid_attributes;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ValidAttributes
                                           
        SDK_NONVOL_PROPERTIES( "_ALPC_MESSAGE_ATTRIBUTES.$", 0x8, true, 0xcf281d0e5a4382a7 );                     
        SDK_FIXED_SIZE( message_attributes_t, 0x8 );                     
    };                                     
};
#include "magic/message_attributes_t.end.hpp"
SDK_VERIFY( struct alpc::message_attributes_t, 0x8 );
