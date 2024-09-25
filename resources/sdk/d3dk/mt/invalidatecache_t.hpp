#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/invalidatecache_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_INVALIDATECACHE]
    // => WDK 10 (NV)
    //
    struct invalidatecache_t       
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t h_device;      //{ +0x0000    } | .hDevice
        _m01 uint32_t h_allocation;  //{ +0x0004    } | .hAllocation
        _m02 uint64_t offset;        //{ +0x0008    } | .Offset
        _m03 uint64_t length;        //{ +0x0010    } | .Length
                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_INVALIDATECACHE.$", 0x0, false, 0xcef666a86d6dfbce );             
        SDK_FIXED_SIZE( invalidatecache_t, 0x18 );             
    };                             
};
#include "magic/invalidatecache_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::invalidatecache_t, 0x18 );
