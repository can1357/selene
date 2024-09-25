#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PATHCCH_OPTIONS]
    //  Windows 11
    //
    enum class pathcch_options_t : int32_t        
    {                                             
        none =                            0x0,      // Windows 11
        allow_long_paths =                0x1,      // Windows 11
        force_enable_long_name_process =  0x2,      // Windows 11
        force_disable_long_name_process = 0x4,      // Windows 11
        do_not_normalize_segments =       0x8,      // Windows 11
        ensure_is_extended_length_path =  0x10,     // Windows 11
        ensure_trailing_slash =           0x20,     // Windows 11
        canonicalize_slashes =            0x40,     // Windows 11
    };                                            
};
