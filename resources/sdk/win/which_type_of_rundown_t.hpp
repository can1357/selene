#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WhichTypeOfRundown]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class which_type_of_rundown_t : int32_t            
    {                                                       
        no_rundown =                                 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_in_remote_addref_call =              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_in_remote_query_interface_call =     0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_in_remote_query_interface2_call =    0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_in_non_i_unknown_interface_call =    0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_in_server_side_unmarshal_interface = 0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
