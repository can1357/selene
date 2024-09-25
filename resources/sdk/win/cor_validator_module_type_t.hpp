#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorValidatorModuleType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_validator_module_type_t : int32_t
    {                                               
        invalid = 0x0,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        min =     0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe =      0x1,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        obj =     0x2,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enc =     0x3,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incr =    0x4,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0x4,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
