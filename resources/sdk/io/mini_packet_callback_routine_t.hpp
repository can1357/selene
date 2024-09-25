#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_MINI_PACKET_CALLBACK_ROUTINE]
    // => WDK 10
    //
    struct mini_packet_callback_routine_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "_IO_MINI_PACKET_CALLBACK_ROUTINE.$", 0x0, false, 0xbcac2f1e0d583c3e );
        SDK_FIXED_SIZE( mini_packet_callback_routine_t, 0x0 );
    };                                   
};
SDK_VERIFY( struct io::mini_packet_callback_routine_t, 0x0 );
