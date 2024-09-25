#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setgpupartitioncount_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETGPUPARTITIONCOUNT]
    // => WDK 10 (NV)
    //
    struct setgpupartitioncount_t     
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t partition_count;  //{ +0x0000    } | .PartitionCount
                                      
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETGPUPARTITIONCOUNT.$", 0x0, false, 0xbb41d365d8cc9d2 );                
        SDK_FIXED_SIZE( setgpupartitioncount_t, 0x4 );                
    };                                
};
#include "magic/setgpupartitioncount_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setgpupartitioncount_t, 0x4 );
