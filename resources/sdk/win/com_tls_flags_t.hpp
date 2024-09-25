#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComTlsFlags]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_tls_flags_t : uint32_t
    {                                    
        none =                    0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        chain_restricted_errors = 0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
