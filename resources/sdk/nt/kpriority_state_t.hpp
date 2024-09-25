#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kpriority_state_t.start.hpp"
namespace nt
{
    // [union _KPRIORITY_STATE]
    // => Windows 11
    //
    union kpriority_state_t          
    {                                
        // Windows 11                
        //                           
        _m00 uint7_t priority;         //{ +0x0000@0  } | .Priority
        _m01 uint1_t isolation_width;  //{ +0x0000@7  } | .IsolationWidth
        _m02 uint8_t all_fields;       //{ +0x0000    } | .AllFields
                                     
        SDK_MAGIC_PROPERTIES( "_KPRIORITY_STATE.$", 0x0, false, 0x5fb838099bf18300 );                
        SDK_FIXED_SIZE( kpriority_state_t, 0x1 );                
    };                               
};
#include "magic/kpriority_state_t.end.hpp"
SDK_VERIFY( union nt::kpriority_state_t, 0x1 );
