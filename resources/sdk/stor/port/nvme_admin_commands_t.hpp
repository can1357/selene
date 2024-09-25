#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum NVME_ADMIN_COMMANDS]
    //  Windows 11
    //
    enum class nvme_admin_commands_t : int32_t
    {                                         
        delete_io_sq =              0x0,        // Windows 11
        create_io_sq =              0x1,        // Windows 11
        get_log_page =              0x2,        // Windows 11
        delete_io_cq =              0x4,        // Windows 11
        create_io_cq =              0x5,        // Windows 11
        identify =                  0x6,        // Windows 11
        abort =                     0x8,        // Windows 11
        set_features =              0x9,        // Windows 11
        get_features =              0xa,        // Windows 11
        async_event_request =       0xc,        // Windows 11
        namespace_management =      0xd,        // Windows 11
        firmware_activate =         0x10,       // Windows 11
        firmware_commit =           0x10,       // Windows 11
        firmware_image_download =   0x11,       // Windows 11
        device_self_test =          0x14,       // Windows 11
        namespace_attachment =      0x15,       // Windows 11
        directive_send =            0x19,       // Windows 11
        directive_receive =         0x1a,       // Windows 11
        virtualization_management = 0x1c,       // Windows 11
        nvme_mi_send =              0x1d,       // Windows 11
        nvme_mi_receive =           0x1e,       // Windows 11
        doorbell_buffer_config =    0x7c,       // Windows 11
        format_nvm =                0x80,       // Windows 11
        security_send =             0x81,       // Windows 11
        security_receive =          0x82,       // Windows 11
        sanitize =                  0x84,       // Windows 11
        get_lba_status =            0x86,       // Windows 11
    };                                        
};
