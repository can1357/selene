#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComClassRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_class_registration_entry_property_flags_t : uint64_t
    {                                                                  
        none =                                     0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_id =                                0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =                             0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        short_display_name =                       0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prog_id =                                  0x8,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        version_independent_prog_id =              0x10,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_ole_default_handler =               0x20,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        insertable_object =                        0x40,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implemented_categories =                   0x80,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_convert_to =                          0x100,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_icon =                             0x200,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_format_name =                      0x400,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_formats =                             0x800,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conversion_readable =                      0x1000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conversion_read_writable =                 0x2000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verbs =                                    0x4000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        misc_status_default =                      0x8000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        misc_status_aspects =                      0x10000,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        toolbox_bitmap32 =                         0x20000,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                                 0x40000,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        threading =                                0x80000,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outofproc_class_has_machine_scope =        0x100000,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc_server_dll_path_x86 =               0x200000,             // Windows 11
        inproc_server_dll_path_x64 =               0x400000,             // Windows 11
        inproc_server_dll_path_arm =               0x800000,             // Windows 11
        inproc_server_dll_path_arm64 =             0x1000000,            // Windows 11
        is_system_inproc_server_dll =              0x2000000,            // Windows 11
        inproc_server_has_machine_scope =          0x4000000,            // Windows 11
        enable_virtualization_for_inproc_server =  0x8000000,            // Windows 11
        inproc_handler_dll_path_x86 =              0x10000000,           // Windows 11
        inproc_handler_dll_path_x64 =              0x20000000,           // Windows 11
        inproc_handler_dll_path_arm =              0x40000000,           // Windows 11
        inproc_handler_dll_path_arm64 =            0x80000000,           // Windows 11
        inproc_handler_has_machine_scope =         0x100000000,          // Windows 11
        enable_virtualization_for_inproc_handler = 0x200000000,          // Windows 11
        custom_attributes =                        0x400000000,          // Windows 11
        type_lib_id =                              0x800000000,          // Windows 11
        type_lib_version_number =                  0x1000000000,         // Windows 11
    };                                                                 
};
