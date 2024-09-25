#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_STEER_INTERRUPT_TARGET]
    // => WDK 10
    //
    struct steer_interrupt_target_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_IO_STEER_INTERRUPT_TARGET.$", 0x0, false, 0xba1eae8ce19d2294 );
        SDK_FIXED_SIZE( steer_interrupt_target_t, 0x0 );
    };                             
};
SDK_VERIFY( struct io::steer_interrupt_target_t, 0x0 );
