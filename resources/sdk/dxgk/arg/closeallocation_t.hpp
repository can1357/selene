#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/closeallocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CLOSEALLOCATION]
    // => WDK 10 (NV)
    //
    struct closeallocation_t                 
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t     num_allocations;     //{ +0x0000    } | .NumAllocations
        _m01 const void** p_open_handle_list;  //{ +0x0008    } | .pOpenHandleList
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CLOSEALLOCATION.$", 0x0, false, 0x171a9031b48c2651 );                   
        SDK_FIXED_SIZE( closeallocation_t, 0x10 );                   
    };                                       
};
#include "magic/closeallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::closeallocation_t, 0x10 );
