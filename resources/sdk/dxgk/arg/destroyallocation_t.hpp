#pragma once
#include <sdkgen/support_library.hpp>
#include "../destroyallocationflags_t.hpp"

#include "magic/destroyallocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DESTROYALLOCATION]
    // => WDK 10 (NV)
    //
    struct destroyallocation_t                                       
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                              num_allocations;    //{ +0x0000    } | .NumAllocations
        _m01 const void**                          p_allocation_list;  //{ +0x0008    } | .pAllocationList
        _m02 void*                                 h_resource;         //{ +0x0010    } | .hResource
        _m03 struct dxgk::destroyallocationflags_t flags;              //{ +0x0018    } | .Flags
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DESTROYALLOCATION.$", 0x0, false, 0x5eaa3b3c0f2cbe1b );                  
        SDK_FIXED_SIZE( destroyallocation_t, 0x20 );                  
    };                                                               
};
#include "magic/destroyallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::destroyallocation_t, 0x20 );
