#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorMethodSemanticsAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_method_semantics_attr_t : int32_t
    {                                               
        setter =    0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getter =    0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =     0x4,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_on =    0x8,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_on = 0x10,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fire =      0x20,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
