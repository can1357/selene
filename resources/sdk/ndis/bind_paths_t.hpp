#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_paths_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_BIND_PATHS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_paths_t                             
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                          
        _m00 uint32_t                        number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Number
        _m01 sdk::array<nt::unicode_view, 1> paths;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Paths
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_BIND_PATHS.$", 0x18, true, 0x73eef76fae6efe94 );       
        SDK_FIXED_SIZE( bind_paths_t, 0x18 );       
    };                                              
};
#include "magic/bind_paths_t.end.hpp"
SDK_VERIFY( struct ndis::bind_paths_t, 0x18 );
