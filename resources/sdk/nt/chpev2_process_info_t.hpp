#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHPEV2_PROCESS_INFO]
    // => Windows 11
    //
    struct chpev2_process_info_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_CHPEV2_PROCESS_INFO.$", 0x0, false, 0xd626ab51bc7036e2 );
        SDK_FIXED_SIZE( chpev2_process_info_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::chpev2_process_info_t, 0x0 );
