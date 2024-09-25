#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComClassRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_class_registration_entry_property_index_t : uint32_t
    {                                                                  
        server_id =                                0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =                             0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        short_display_name =                       0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prog_id =                                  0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        version_independent_prog_id =              0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_ole_default_handler =               0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        insertable_object =                        0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implemented_categories =                   0x7,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_convert_to =                          0x8,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_icon =                             0x9,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_format_name =                      0xa,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_formats =                             0xb,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conversion_readable =                      0xc,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conversion_read_writable =                 0xd,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        verbs =                                    0xe,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        misc_status_default =                      0xf,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        misc_status_aspects =                      0x10,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        toolbox_bitmap32 =                         0x11,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dll_path =                                 0x12,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        threading =                                0x13,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =                         0x14,                 // Windows 10 v1607
        outofproc_class_has_machine_scope =        0x14,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc_server_dll_path_x86 =               0x15,                 // Windows 11
        num_properties =                           0x15,                 // Windows 10 v2004, Windows 10 v20H2
        inproc_server_dll_path_x64 =               0x16,                 // Windows 11
        inproc_server_dll_path_arm =               0x17,                 // Windows 11
        inproc_server_dll_path_arm64 =             0x18,                 // Windows 11
        is_system_inproc_server_dll =              0x19,                 // Windows 11
        inproc_server_has_machine_scope =          0x1a,                 // Windows 11
        enable_virtualization_for_inproc_server =  0x1b,                 // Windows 11
        inproc_handler_dll_path_x86 =              0x1c,                 // Windows 11
        inproc_handler_dll_path_x64 =              0x1d,                 // Windows 11
        inproc_handler_dll_path_arm =              0x1e,                 // Windows 11
        inproc_handler_dll_path_arm64 =            0x1f,                 // Windows 11
        inproc_handler_has_machine_scope =         0x20,                 // Windows 11
        enable_virtualization_for_inproc_handler = 0x21,                 // Windows 11
        custom_attributes =                        0x22,                 // Windows 11
        type_lib_id =                              0x23,                 // Windows 11
        type_lib_version_number =                  0x24,                 // Windows 11
        //num_properties =                         0x25,                 // Windows 11
    };                                                                 
};
