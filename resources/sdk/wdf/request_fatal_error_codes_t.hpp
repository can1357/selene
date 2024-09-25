#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_REQUEST_FATAL_ERROR_CODES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_fatal_error_codes_t : int32_t
    {                                               
        no_more_stack_locations =     0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null_irp =                    0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_already_sent =        0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        information_length_mismatch = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_not_in_queue =        0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
