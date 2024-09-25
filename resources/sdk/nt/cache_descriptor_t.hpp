#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_cache_type_t.hpp"

#include "magic/cache_descriptor_t.start.hpp"
namespace nt
{
    // [struct _CACHE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cache_descriptor_t                              
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                 
        _m00 uint8_t                         level;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m01 uint8_t                         associativity;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Associativity
        _m02 uint16_t                        line_size;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LineSize
        _m03 uint32_t                        size;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m04 enum nt::processor_cache_type_t type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                                           
        SDK_NONVOL_PROPERTIES( "_CACHE_DESCRIPTOR.$", 0xc, true, 0xab94d18dffe63946 );              
        SDK_FIXED_SIZE( cache_descriptor_t, 0xc );              
    };                                                     
};
#include "magic/cache_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::cache_descriptor_t, 0xc );
