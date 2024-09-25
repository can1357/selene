#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ContainerExtentId]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class container_extent_id_t : int32_t        
    {                                                 
        base_id_error_information =     0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag_reserved_for_testing =     0x20000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag_passthrough_is_sync_only = 0x40000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flag_passthrough =              0x80000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        id_error_information =          0x80000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flags_sync_passthrough =        0xc0000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        passthrough_flags_mask =        0xc0000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flags_mask =                    0xe0000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
