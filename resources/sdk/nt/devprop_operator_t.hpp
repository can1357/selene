#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVPROP_OPERATOR]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class devprop_operator_t : int32_t                  
    {                                                        
        none =                                 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exists =                               0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        equals =                               0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater_than =                         0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        less_than =                            0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        greater_than_equals =                  0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        less_than_equals =                     0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitwise_and =                          0x7,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitwise_or =                           0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begins_with =                          0x9,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ends_with =                            0xa,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        contains =                             0xb,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_eval =                            0xfff,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_contains =                        0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_begins_with =             0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_ends_with =               0x3000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_contains =                0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_list =                            0xf000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modifier_not =                         0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_exists =                           0x10001,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_equals =                           0x10002,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modifier_ignore_case =                 0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        equals_ignore_case =                   0x20002,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begins_with_ignore_case =              0x20009,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ends_with_ignore_case =                0x2000a,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        contains_ignore_case =                 0x2000b,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_contains_ignore_case =            0x21000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_begins_with_ignore_case = 0x22000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_ends_with_ignore_case =   0x23000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        list_element_contains_ignore_case =    0x24000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_equals_ignore_case =               0x30002,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_modifier =                        0xf0000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        and_open =                             0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        and_close =                            0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        or_open =                              0x300000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        or_close =                             0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_open =                             0x500000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_close =                            0x600000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_logical =                         0xff00000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        array_contains =                       0x10000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_array =                           0xf0000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_not_logical =                     0xf00fffff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
