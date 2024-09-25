#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/containerversion_t.start.hpp"
namespace win
{
    struct container_extent_array_t;

    // [struct CONTAINERVERSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct containerversion_t                                       
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                          
        _m00 uint32_t                              version;           //{ +0x0000    +0x0000    +0x0000    } | .version
        _m01 uint64_t                              capability_flags;  //{ +0x0008    +0x0008    +0x0008    } | .capabilityFlags
        _m02 struct win::container_extent_array_t* extensions;        //{ +0x0010    +0x0010    +0x0010    } | .extensions
                                                                    
        SDK_MAGIC_PROPERTIES( "CONTAINERVERSION.$", 0x18, true, 0x9a48b5b09e1f1380 );                 
        SDK_FIXED_SIZE( containerversion_t, 0x18 );                 
    };                                                              
};
#include "magic/containerversion_t.end.hpp"
SDK_VERIFY( struct win::containerversion_t, 0x18 );
