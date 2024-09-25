#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentflags2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTFLAGS2]
    // => WDK 10 (NV)
    //
    struct segmentflags2_t                           
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  aperture;                        //{ +0x0000@0  } | .Aperture
        _m01 uint1_t  populated_from_system_memory;    //{ +0x0000@1  } | .PopulatedFromSystemMemory
        _m02 uint1_t  system_memory_reserved_by_bios;  //{ +0x0000@2  } | .SystemMemoryReservedByBios
        _m03 uint1_t  cpu_visible;                     //{ +0x0000@3  } | .CpuVisible
        _m04 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTFLAGS2.$", 0x0, false, 0x78a2f0f8ede4fd52 );                               
        SDK_FIXED_SIZE( segmentflags2_t, 0x4 );                               
    };                                               
};
#include "magic/segmentflags2_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentflags2_t, 0x4 );
