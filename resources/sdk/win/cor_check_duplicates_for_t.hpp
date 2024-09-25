#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorCheckDuplicatesFor]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_check_duplicates_for_t : int32_t     
    {                                                   
        md_no_dup_checks =                0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_type_def =                 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_interface_impl =           0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_method_def =               0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_type_ref =                 0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_member_ref =               0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_custom_attribute =         0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_param_def =                0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_permission =               0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_all =                      0xff,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_enc =                      0xff,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_property =                 0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_event =                    0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_field_def =                0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_signature =                0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_module_ref =               0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_type_spec =                0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_impl_map =                 0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_assembly_ref =             0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_file =                     0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_exported_type =            0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_manifest_resource =        0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_generic_param =            0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_method_spec =              0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_default =                  0x102818,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_generic_param_constraint = 0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        md_dup_assembly =                 0x10000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
