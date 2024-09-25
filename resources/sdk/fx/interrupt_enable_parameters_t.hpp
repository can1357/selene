#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interrupt_enable_parameters_t.start.hpp"
namespace fx
{
    class interrupt_t;

    // [struct FxInterruptEnableParameters]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_enable_parameters_t       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 class fx::interrupt_t* interrupt;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interrupt
        _m01 int32_t                return_val;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReturnVal
                                               
        SDK_MAGIC_PROPERTIES( "FxInterruptEnableParameters.$", 0x10, true, 0xbfb9094212b1af3b );           
        SDK_FIXED_SIZE( interrupt_enable_parameters_t, 0x10 );           
    };                                         
};
#include "magic/interrupt_enable_parameters_t.end.hpp"
SDK_VERIFY( struct fx::interrupt_enable_parameters_t, 0x10 );
