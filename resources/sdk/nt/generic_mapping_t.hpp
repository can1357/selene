#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_mapping_t.start.hpp"
namespace nt
{
    // [struct _GENERIC_MAPPING]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_mapping_t          
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t generic_read;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GenericRead
        _m01 uint32_t generic_write;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .GenericWrite
        _m02 uint32_t generic_execute;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .GenericExecute
        _m03 uint32_t generic_all;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .GenericAll
                                      
        SDK_NONVOL_PROPERTIES( "_GENERIC_MAPPING.$", 0x10, true, 0xd66b003207dfc324 );                
        SDK_FIXED_SIZE( generic_mapping_t, 0x10 );                
    };                                
};
#include "magic/generic_mapping_t.end.hpp"
SDK_VERIFY( struct nt::generic_mapping_t, 0x10 );
