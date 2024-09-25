#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CompilationRelaxationsEnum]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class compilation_relaxations_enum_t : int32_t      
    {                                                        
        compilation_relaxations_no_string_interning = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
