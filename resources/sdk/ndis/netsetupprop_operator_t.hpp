#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NETSETUPPROP_OPERATOR]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class netsetupprop_operator_t : int32_t           
    {                                                      
        operator_none =                      0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_principal_object =   0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_exists =                    0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_equals =                    0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_greater_than =              0x3,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_less_than =                 0x4,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_greater_than_equals =       0x5,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_less_than_equals =          0x6,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_bitmask_all =               0x7,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_bitmask_any =               0x8,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_changed =                   0x100,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_changed_any_in_namespace =  0x101,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_eval =                 0xfff,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_list_contains =             0x1000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_list_count =                0x2000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_list =                 0xf000,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_modifier_not =              0x10000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_not_exists =                0x10001,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_not_equals =                0x10002,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_modifier_ignore_case =      0x20000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_equals_ignore_case =        0x20002,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_list_contains_ignore_case = 0x21000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_not_equals_ignore_case =    0x30002,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_modifier =             0xf0000,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_not_logical =          0xfffff,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_and_open =                  0x100000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_and_close =                 0x200000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_or_open =                   0x300000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_or_close =                  0x400000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_not_open =                  0x500000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_not_close =                 0x600000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_xor_open =                  0x700000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_xor_close =                 0x800000,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_logical =              0xff00000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_transaction =        0x10000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_any_on_path =        0x20000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_all_on_path =        0x20010000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_top_of_path =        0x30000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_bottom_of_path =     0x40000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_global =             0x50000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_modifier_any_property =       0x60000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        operator_mask_target =               0xf0000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
