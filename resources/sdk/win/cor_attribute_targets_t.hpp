#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorAttributeTargets]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_attribute_targets_t : int32_t
    {                                           
        assembly =          0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module =            0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _class =            0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _struct =           0x8,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _enum =             0x10,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        constructor =       0x20,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method =            0x40,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =          0x80,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field =             0x100,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =             0x200,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface =         0x400,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parameter =         0x800,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegate =          0x1000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        class_members =     0x17fc,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic_parameter = 0x4000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =               0x5fff,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
