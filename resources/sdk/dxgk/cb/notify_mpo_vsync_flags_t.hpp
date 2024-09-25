#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/notify_mpo_vsync_flags_t.start.hpp"
namespace dxgk::cb
{
    // [struct _DXGKCB_NOTIFY_MPO_VSYNC_FLAGS]
    // => WDK 10 (NV)
    //
    struct notify_mpo_vsync_flags_t       
    {                                     
        // WDK 10                         
        //                                
        _m00 uint1_t  post_present_needed;  //{ +0x0000@0  } | .PostPresentNeeded
        _m01 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_DXGKCB_NOTIFY_MPO_VSYNC_FLAGS.$", 0x0, false, 0x77c212ccbda7552e );                    
        SDK_FIXED_SIZE( notify_mpo_vsync_flags_t, 0x4 );                    
    };                                    
};
#include "magic/notify_mpo_vsync_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::cb::notify_mpo_vsync_flags_t, 0x4 );
