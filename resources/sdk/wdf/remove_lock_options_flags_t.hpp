#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_REMOVE_LOCK_OPTIONS_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class remove_lock_options_flags_t : int32_t   
    {                                                  
        wdf_remove_lock_option_acquire_for_io = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
