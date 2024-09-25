#pragma once
#include <sdkgen/support_library.hpp>
#include "description_header_t.hpp"

#include "magic/rsdt_32_t.start.hpp"
namespace nt
{
    // [struct _RSDT_32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsdt_32_t                                
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                          
        _m00 struct nt::description_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<uint32_t, 1>         tables;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Tables
                                                    
        SDK_MAGIC_PROPERTIES( "_RSDT_32.$", 0x28, true, 0x9a8e4febfce9a480 );       
        SDK_FIXED_SIZE( rsdt_32_t, 0x28 );          
    };                                              
};
#include "magic/rsdt_32_t.end.hpp"
SDK_VERIFY( struct nt::rsdt_32_t, 0x28 );
