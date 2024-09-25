#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rebalance_flags_t.start.hpp"
namespace pnp
{
    // [union _PNP_REBALANCE_FLAGS]
    // => Windows 11
    //
    union rebalance_flags_t                                 
    {                                                       
        // Windows 11                                       
        //                                                  
        _m00 uint1_t  rebalance_due_to_dynamic_partitioning;  //{ +0x0000@0  } | .RebalanceDueToDynamicPartitioning
        _m01 uint1_t  reset_device_while_stopped;             //{ +0x0000@1  } | .ResetDeviceWhileStopped
        _m02 uint32_t as_ulong;                               //{ +0x0000    } | .AsUlong
                                                            
        SDK_MAGIC_PROPERTIES( "_PNP_REBALANCE_FLAGS.$", 0x0, false, 0xbc90f34fd7607c47 );                                      
        SDK_FIXED_SIZE( rebalance_flags_t, 0x4 );                                      
    };                                                      
};
#include "magic/rebalance_flags_t.end.hpp"
SDK_VERIFY( union pnp::rebalance_flags_t, 0x4 );
