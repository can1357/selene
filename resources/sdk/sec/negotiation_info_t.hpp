#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/negotiation_info_t.start.hpp"
namespace sec
{
    // [struct _SEC_NEGOTIATION_INFO]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct negotiation_info_t     
    {                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NameLength
        _m02 wchar_t* name;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
                                  
        SDK_NONVOL_PROPERTIES( "_SEC_NEGOTIATION_INFO.$", 0x18, true, 0xe1e7ff0cc67ee374 );            
        SDK_FIXED_SIZE( negotiation_info_t, 0x18 );            
    };                            
};
#include "magic/negotiation_info_t.end.hpp"
SDK_VERIFY( struct sec::negotiation_info_t, 0x18 );
