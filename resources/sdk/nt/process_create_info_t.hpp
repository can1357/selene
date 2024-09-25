#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PROCESS_CREATE_INFO]
    // => WDK 10
    //
    struct process_create_info_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_PROCESS_CREATE_INFO.$", 0x0, false, 0x1ac102eb49c333a4 );
        SDK_FIXED_SIZE( process_create_info_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::process_create_info_t, 0x0 );
