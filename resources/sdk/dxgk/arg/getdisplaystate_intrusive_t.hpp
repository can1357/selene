#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getdisplaystate_intrusive_t.start.hpp"
namespace dxgk::arg
{
    struct displaystate_intrusive_t;

    // [struct _DXGKARG_GETDISPLAYSTATE_INTRUSIVE]
    // => WDK 10 (NV)
    //
    struct getdisplaystate_intrusive_t                                                            
    {                                                                                             
        // WDK 10                                                                                 
        //                                                                                        
        _m00 uint32_t                                     num_of_targets;                           //{ +0x0000    } | .NumOfTargets
        _m01 uint32_t                                     size_of_display_state_intrusive_element;  //{ +0x0004    } | .SizeOfDisplayStateIntrusiveElement
        _m02 struct dxgk::arg::displaystate_intrusive_t** pp_display_state_intrusive;               //{ +0x0008    } | .ppDisplayStateIntrusive
                                                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETDISPLAYSTATE_INTRUSIVE.$", 0x0, false, 0x9c5e76aa6f2d017b );                                        
        SDK_FIXED_SIZE( getdisplaystate_intrusive_t, 0x10 );                                        
    };                                                                                            
};
#include "magic/getdisplaystate_intrusive_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getdisplaystate_intrusive_t, 0x10 );
