#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorSaveSize]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_save_size_t : int32_t
    {                                   
        accurate =               0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        quick =                  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        discard_transient_c_as = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
