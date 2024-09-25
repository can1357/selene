#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorTokenType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_token_type_t : int32_t        
    {                                            
        module =                   0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ref =                 0x1000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_def =                 0x2000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field_def =                0x4000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method_def =               0x6000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        param_def =                0x8000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_impl =           0x9000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        member_ref =               0xa000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attribute =         0xc000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permission =               0xe000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        signature =                0x11000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =                    0x14000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =                 0x17000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method_impl =              0x19000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_ref =               0x1a000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_spec =                0x1b000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assembly =                 0x20000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assembly_ref =             0x23000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file =                     0x26000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exported_type =            0x27000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        manifest_resource =        0x28000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic_param =            0x2a000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method_spec =              0x2b000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic_param_constraint = 0x2c000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =                   0x70000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name =                     0x71000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        base_type =                0x72000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
