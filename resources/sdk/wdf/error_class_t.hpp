#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WdfErrorClass]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_class_t : int32_t         
    {                                          
        undefined =                     0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_argument =                  0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_state =                     0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_response =                  0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad_action =                    0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lost_reference =                0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ddi_function_table_mismatched = 0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dm_start =                      0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_start =                      0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        global_max =                    0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_start =                    0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_start =                0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rd_start =                      0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test_start =                    0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dm_max =                        0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_max =                        0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        host_max =                      0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        platform_max =                  0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rd_max =                        0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test_max =                      0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
