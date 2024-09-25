#pragma once
#include <sdkgen/support_library.hpp>
#include "../mode_behavior_flags_t.hpp"

#include "magic/controlmodebehavior_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CONTROLMODEBEHAVIOR]
    // => WDK 10 (NV)
    //
    struct controlmodebehavior_t                             
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 union dxgk::mode_behavior_flags_t request;        //{ +0x0000    } | .Request
        _m01 union dxgk::mode_behavior_flags_t satisfied;      //{ +0x0004    } | .Satisfied
        _m02 union dxgk::mode_behavior_flags_t not_satisfied;  //{ +0x0008    } | .NotSatisfied
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CONTROLMODEBEHAVIOR.$", 0x0, false, 0x834b30aed157ac98 );              
        SDK_FIXED_SIZE( controlmodebehavior_t, 0xc );              
    };                                                       
};
#include "magic/controlmodebehavior_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::controlmodebehavior_t, 0xc );
