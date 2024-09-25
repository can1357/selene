#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp { struct replace_processor_list_t; }

#include "magic/dp_replace_parameters_t.start.hpp"
namespace hal
{
    // [struct _HAL_DP_REPLACE_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dp_replace_parameters_t                                   
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              flags;              //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct pnp::replace_processor_list_t* target_processors;  //{ +0x0008    +0x0008    +0x0008    } | .TargetProcessors
        _m02 struct pnp::replace_processor_list_t* spare_processors;   //{ +0x0010    +0x0010    +0x0010    } | .SpareProcessors
                                                                     
        SDK_MAGIC_PROPERTIES( "_HAL_DP_REPLACE_PARAMETERS.$", 0x18, true, 0xa632cae9c912c18d );                  
        SDK_FIXED_SIZE( dp_replace_parameters_t, 0x18 );                  
    };                                                               
};
#include "magic/dp_replace_parameters_t.end.hpp"
SDK_VERIFY( struct hal::dp_replace_parameters_t, 0x18 );
