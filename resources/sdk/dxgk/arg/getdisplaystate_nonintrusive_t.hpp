#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct displaystate_nonintrusive_t; }

#include "magic/getdisplaystate_nonintrusive_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE]
    // => WDK 10 (NV)
    //
    struct getdisplaystate_nonintrusive_t                                                           
    {                                                                                               
        // WDK 10                                                                                   
        //                                                                                          
        _m00 uint32_t                                   num_of_targets;                               //{ +0x0000    } | .NumOfTargets
        _m01 uint32_t                                   size_of_display_state_non_intrusive_element;  //{ +0x0004    } | .SizeOfDisplayStateNonIntrusiveElement
        _m02 struct dxgk::displaystate_nonintrusive_t** pp_display_state_non_intrusive;               //{ +0x0008    } | .ppDisplayStateNonIntrusive
                                                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETDISPLAYSTATE_NONINTRUSIVE.$", 0x0, false, 0x2219131cab9a5f22 );                                            
        SDK_FIXED_SIZE( getdisplaystate_nonintrusive_t, 0x10 );                                            
    };                                                                                              
};
#include "magic/getdisplaystate_nonintrusive_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getdisplaystate_nonintrusive_t, 0x10 );
