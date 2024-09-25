#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _COVERAGE_REQUEST_CODES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class coverage_request_codes_t : int32_t
    {                                            
        all_modules =    0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        search_by_hash = 0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        search_by_name = 0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
