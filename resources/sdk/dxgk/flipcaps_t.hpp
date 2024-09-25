#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flipcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_FLIPCAPS]
    // => WDK 10 (NV)
    //
    struct flipcaps_t                             
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  flip_on_v_sync_with_no_wait;  //{ +0x0000@0  } | .FlipOnVSyncWithNoWait
        _m01 uint1_t  flip_on_v_sync_mm_io;         //{ +0x0000@1  } | .FlipOnVSyncMmIo
        _m02 uint1_t  flip_interval;                //{ +0x0000@2  } | .FlipInterval
        _m03 uint1_t  flip_immediate_mm_io;         //{ +0x0000@3  } | .FlipImmediateMmIo
        _m04 uint1_t  flip_independent;             //{ +0x0000@4  } | .FlipIndependent
        _m05 uint1_t  ddi_present_for_i_flip;       //{ +0x0000@5  } | .DdiPresentForIFlip
        _m06 uint1_t  flip_immediate_on_h_sync;     //{ +0x0000@6  } | .FlipImmediateOnHSync
        _m07 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_FLIPCAPS.$", 0x0, false, 0x7bbbe6f9ec5716da );                            
        SDK_FIXED_SIZE( flipcaps_t, 0x4 );                            
    };                                            
};
#include "magic/flipcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::flipcaps_t, 0x4 );
