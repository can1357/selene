#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notify_interrupt_data_flags_t.start.hpp"
namespace dxgk::cb
{
    // [struct _DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS]
    // => WDK 10 (NV)
    //
    struct notify_interrupt_data_flags_t          
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  valid_physical_adapter_mask;  //{ +0x0000@0  } | .ValidPhysicalAdapterMask
        _m01 uint1_t  hsync_flip_completion;        //{ +0x0000@1  } | .HsyncFlipCompletion
        _m02 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS.$", 0x0, false, 0xa7058e69caa8e034 );                            
        SDK_FIXED_SIZE( notify_interrupt_data_flags_t, 0x4 );                            
    };                                            
};
#include "magic/notify_interrupt_data_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::cb::notify_interrupt_data_flags_t, 0x4 );
