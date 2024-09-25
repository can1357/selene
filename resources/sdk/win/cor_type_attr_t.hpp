#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorTypeAttr]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_type_attr_t : int32_t   
    {                                      
        ansi_class =           0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_layout =          0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _class =               0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_public =           0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _public =              0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_public =        0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_private =       0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_family =        0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_assembly =      0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_fam_and_assem = 0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nested_fam_or_assem =  0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        visibility_mask =      0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sequential_layout =    0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        explicit_layout =      0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        layout_mask =          0x18,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        class_semantics_mask = 0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface =            0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        abstract =             0x80,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sealed =               0x100,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_name =         0x400,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rt_special_name =      0x800,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        import =               0x1000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        serializable =         0x2000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        windows_runtime =      0x4000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unicode_class =        0x10000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_class =           0x20000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_format_class =  0x30000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string_format_mask =   0x30000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_security =         0x40000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_mask =        0x40800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        before_field_init =    0x100000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forwarder =            0x200000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_format_mask =   0xc00000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
