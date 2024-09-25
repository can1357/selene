#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorNotificationForTokenMovement]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_notification_for_token_movement_t : int32_t
    {                                                         
        none =             0x0,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method_def =       0x1,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        member_ref =       0x2,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        field_def =        0x4,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ref =         0x8,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =         0xf,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_def =         0x10,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        param_def =        0x20,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_impl =   0x40,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        property =         0x80,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =              0xff,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =            0x100,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        signature =        0x200,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_spec =        0x400,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_attribute = 0x800,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_value =   0x1000,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        permission =       0x2000,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_ref =       0x4000,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name_space =       0x8000,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assembly_ref =     0x1000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file =             0x2000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exported_type =    0x4000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resource =         0x8000000,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
