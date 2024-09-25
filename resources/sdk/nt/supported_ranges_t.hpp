#pragma once
#include <sdkgen/support_library.hpp>
#include "supported_range_t.hpp"

#include "magic/supported_ranges_t.start.hpp"
namespace nt
{
    // [struct _SUPPORTED_RANGES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct supported_ranges_t                                
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 uint16_t                     version;             //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t                      sorted;              //{ +0x0002    +0x0002    +0x0002    } | .Sorted
        _m02 uint32_t                     no_io;               //{ +0x0004    +0x0004    +0x0004    } | .NoIO
        _m03 struct nt::supported_range_t io;                  //{ +0x0008    +0x0008    +0x0008    } | .IO
        _m04 uint32_t                     no_memory;           //{ +0x0030    +0x0030    +0x0030    } | .NoMemory
        _m05 struct nt::supported_range_t memory;              //{ +0x0038    +0x0038    +0x0038    } | .Memory
        _m06 uint32_t                     no_prefetch_memory;  //{ +0x0060    +0x0060    +0x0060    } | .NoPrefetchMemory
        _m07 struct nt::supported_range_t prefetch_memory;     //{ +0x0068    +0x0068    +0x0068    } | .PrefetchMemory
        _m08 uint32_t                     no_dma;              //{ +0x0090    +0x0090    +0x0090    } | .NoDma
        _m09 struct nt::supported_range_t dma;                 //{ +0x0098    +0x0098    +0x0098    } | .Dma
                                                             
        SDK_MAGIC_PROPERTIES( "_SUPPORTED_RANGES.$", 0xc0, true, 0xc7ed36059ea44107 );                   
        SDK_FIXED_SIZE( supported_ranges_t, 0xc0 );                   
    };                                                       
};
#include "magic/supported_ranges_t.end.hpp"
SDK_VERIFY( struct nt::supported_ranges_t, 0xc0 );
