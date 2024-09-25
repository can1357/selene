#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ir_timer_extra_create_parameter_t.start.hpp"
namespace win
{
    // [struct _IR_TIMER_EXTRA_CREATE_PARAMETER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ir_timer_extra_create_parameter_t
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t component_id;           //{ +0x0000    +0x0000    +0x0000    } | .ComponentId
        _m01 uint16_t relative_id;            //{ +0x0002    +0x0002    +0x0002    } | .RelativeId
                                            
        SDK_MAGIC_PROPERTIES( "_IR_TIMER_EXTRA_CREATE_PARAMETER.$", 0x4, true, 0x105afec11ad0e8 );             
        SDK_FIXED_SIZE( ir_timer_extra_create_parameter_t, 0x4 );             
    };                                      
};
#include "magic/ir_timer_extra_create_parameter_t.end.hpp"
SDK_VERIFY( struct win::ir_timer_extra_create_parameter_t, 0x4 );
