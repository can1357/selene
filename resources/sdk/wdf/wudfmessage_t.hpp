#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WUDFMESSAGE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wudfmessage_t : uint8_t                      
    {                                                       
        wudf_msg_reserved =                         0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_irp =                              0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_irp_completion =                   0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_create_device_stack =              0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_add_device =                       0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_create =                           0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_close =                            0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_cleanup =                          0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_read =                             0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_write =                            0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_iocontrol =                        0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_flush =                            0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_query_information_file =           0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_set_information_file =             0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_cancel =                           0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_power_irp_complete =               0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_usb_ss_event =                     0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_close_device_stack =               0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_remote_interface_arrival =         0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_remote_interface_removal =         0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_target_device_notification =       0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_transport_query_id =               0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_companion_add =                    0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_companion_remove =                 0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_companion_synchronous_task =       0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_companion_event =                  0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_framwork_max =                     0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_exit_process =                     0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_proc_mgmt_message_reserved =            0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_proc_mgmt_message_control_object_name = 0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_proc_mgmt_message_query_process =       0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_proc_mgmt_message_open_process =        0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_proc_mgmt_message_close_process =       0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_connect =                          0x21,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_wmi_power_data =                   0x22,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_pofx_event =                       0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wudf_msg_max =                              0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
