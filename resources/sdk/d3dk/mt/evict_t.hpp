#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/evict_flags_t.hpp"

#include "magic/evict_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_EVICT]
    // => WDK 10 (NV)
    //
    struct evict_t                                            
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint32_t                       h_device;           //{ +0x0000    } | .hDevice
        _m01 uint32_t                       num_allocations;    //{ +0x0004    } | .NumAllocations
        _m02 const uint32_t*                allocation_list;    //{ +0x0008    } | .AllocationList
        _m03 struct d3d::ddi::evict_flags_t flags;              //{ +0x0010    } | .Flags
        _m04 uint64_t                       num_bytes_to_trim;  //{ +0x0018    } | .NumBytesToTrim
                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_EVICT.$", 0x0, false, 0xcfb6a2b9682ffadd );                  
        SDK_FIXED_SIZE( evict_t, 0x20 );                      
    };                                                        
};
#include "magic/evict_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::evict_t, 0x20 );
