#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvidpnsourceaddress_output_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddress_output_flags_t
    {                                          
        // WDK 10                        
        //                               
        _m00 uint1_t  pre_present_needed;        //{ +0x0000@0  } | .PrePresentNeeded
        _m01 uint32_t value;                     //{ +0x0000    } | .Value
                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS.$", 0x0, false, 0x7b51e43e78c4e48d );                   
        SDK_FIXED_SIZE( setvidpnsourceaddress_output_flags_t, 0x4 );                   
    };                                         
};
#include "magic/setvidpnsourceaddress_output_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::setvidpnsourceaddress_output_flags_t, 0x4 );
