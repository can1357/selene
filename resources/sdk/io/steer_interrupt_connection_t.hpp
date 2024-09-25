#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_STEER_INTERRUPT_CONNECTION]
    // => WDK 10
    //
    struct steer_interrupt_connection_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_IO_STEER_INTERRUPT_CONNECTION.$", 0x0, false, 0xca6a8a091bb662a0 );
        SDK_FIXED_SIZE( steer_interrupt_connection_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct io::steer_interrupt_connection_t, 0x0 );
