#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_XmitDefs_0006]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_xmit_defs_0006_t : int32_t    
    {                                             
        bad_server_operation =             0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        put_completed =                    0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completed_handler_not_invoked =    0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completed_handler_bad_parameters = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_operation_failure =          0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_results =                      0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_results =               0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
