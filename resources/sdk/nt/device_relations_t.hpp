#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_relations_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _DEVICE_RELATIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_relations_t                                   
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                      
        _m00 uint32_t                                   count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<struct nt::device_object_t*, 1> objects;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Objects
                                                                
        SDK_NONVOL_PROPERTIES( "_DEVICE_RELATIONS.$", 0x10, true, 0xf563591bdb4d9489 );        
        SDK_FIXED_SIZE( device_relations_t, 0x10 );             
    };                                                          
};
#include "magic/device_relations_t.end.hpp"
SDK_VERIFY( struct nt::device_relations_t, 0x10 );
