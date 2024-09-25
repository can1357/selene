#pragma once
#include <sdkgen/support_library.hpp>

namespace obp
{
    // [enum _OBP_LOOKUP_DIR_ENTRY_FLAGS]
    //  Windows 11
    //
    enum class lookup_dir_entry_flags_t : int32_t
    {                                            
        search_shadow =    0x1,                    // Windows 11
        is_sandboxed =     0x2,                    // Windows 11
        is_not_sandboxed = 0x4,                    // Windows 11
        sandbox_computed = 0x6,                    // Windows 11
        case_insensitive = 0x40,                   // Windows 11
    };                                           
};
