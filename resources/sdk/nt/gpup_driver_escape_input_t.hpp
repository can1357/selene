#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"

#include "magic/gpup_driver_escape_input_t.start.hpp"
namespace nt
{
    // [struct _GPUP_DRIVER_ESCAPE_INPUT]
    // => WDK 10 (NV)
    //
    struct gpup_driver_escape_input_t  
    {                                  
        // WDK 10                      
        //                             
        _m00 struct nt::luid_t vf_luid;  //{ +0x0000    } | .vfLUID
                                       
        SDK_NONVOL_PROPERTIES( "_GPUP_DRIVER_ESCAPE_INPUT.$", 0x0, false, 0xc1cc7ca1eaf0d5c4 );        
        SDK_FIXED_SIZE( gpup_driver_escape_input_t, 0x8 );        
    };                                 
};
#include "magic/gpup_driver_escape_input_t.end.hpp"
SDK_VERIFY( struct nt::gpup_driver_escape_input_t, 0x8 );
