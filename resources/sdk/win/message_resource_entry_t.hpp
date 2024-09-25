#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/message_resource_entry_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_RESOURCE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct message_resource_entry_t        
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 uint16_t               length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t               flags;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 sdk::array<uint8_t, 1> text;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Text
                                           
        SDK_NONVOL_PROPERTIES( "_MESSAGE_RESOURCE_ENTRY.$", 0x6, true, 0x771c49a842adda85 );       
        SDK_FIXED_SIZE( message_resource_entry_t, 0x6 );       
    };                                     
};
#include "magic/message_resource_entry_t.end.hpp"
SDK_VERIFY( struct win::message_resource_entry_t, 0x6 );
