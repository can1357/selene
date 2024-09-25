#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum OLETLS_PREVENT_RUNDOWN_MITIGATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oletls_prevent_rundown_mitigation_t : int32_t          
    {                                                                 
        no_mitigation_in_effect =                              0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_with_in_parameter_mitigation =              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_with_inproc_out_parameter_mitigation =      0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_with_outofproc_out_parameter_mitigation =   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_with_mshlflags_tablestrong =                0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshaling_with_in_parameter_mitigation =            0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshaling_with_inproc_out_parameter_mitigation =    0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshaling_with_outofproc_out_parameter_mitigation = 0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                
};
