#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDFSTRUCTENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wdfstructenum_t : int32_t                                         
    {                                                                            
        index_wdf_child_address_description_header =                     0x0,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_child_identification_description_header =              0x1,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_child_list_config =                                    0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_child_list_iterator =                                  0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_child_retrieve_info =                                  0x4,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_class_bind_info =                                      0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_class_bind_info2 =                                     0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_class_extension_descriptor =                           0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_class_library_info =                                   0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_class_version =                                        0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_common_buffer_config =                                 0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_custom_type_context =                                  0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_pnp_capabilities =                              0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_pnp_notification_data =                         0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_power_capabilities =                            0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_power_notification_data =                       0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_power_policy_idle_settings =                    0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_power_policy_notification_data =                0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_power_policy_wake_settings =                    0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_property_data =                                 0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_device_state =                                         0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_dma_enabler_config =                                   0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_dma_system_profile_config =                            0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_dpc_config =                                           0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_driver_config =                                        0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_driver_globals =                                       0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_driver_version_available_params =                      0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_fdo_event_callbacks =                                  0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_fileobject_config =                                    0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_interrupt_config =                                     0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_interrupt_extended_policy =                            0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_interrupt_info =                                       0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_io_forward_progress_reserved_policy_settings =         0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_io_queue_config =                                      0x21,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_io_queue_forward_progress_policy =                     0x22,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_io_target_open_params =                                0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_io_type_config =                                       0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_memory_descriptor =                                    0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_object_attributes =                                    0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_object_context_type_info =                             0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_pdo_event_callbacks =                                  0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_pnppower_event_callbacks =                             0x29,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_power_framework_settings =                             0x2a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_power_policy_event_callbacks =                         0x2b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_power_routine_timed_out_data =                         0x2c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_query_interface_config =                               0x2d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_queue_fatal_error_data =                               0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_remove_lock_options =                                  0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_completion_params =                            0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_fatal_error_information_length_mismatch_data = 0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_forward_options =                              0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_parameters =                                   0x33,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_reuse_params =                                 0x34,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_request_send_options =                                 0x35,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_task_send_options =                                    0x36,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_timer_config =                                         0x37,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_triage_info =                                          0x38,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_continuous_reader_config =                         0x39,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_device_create_config =                             0x3a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_device_information =                               0x3b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_device_select_config_params =                      0x3c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_interface_select_setting_params =                  0x3d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_interface_setting_pair =                           0x3e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_pipe_information =                                 0x3f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_usb_request_completion_params =                        0x40,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_wmi_instance_config =                                  0x41,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_wmi_provider_config =                                  0x42,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdf_workitem_config =                                      0x43,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfcontext_triage_info =                                   0x44,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfcontexttype_triage_info =                               0x45,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfcx_fileobject_config =                                  0x46,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfcx_pnppower_event_callbacks =                           0x47,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfdevice_triage_info =                                    0x48,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdffwdprogress_triage_info =                               0x49,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfirp_triage_info =                                       0x4a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfirpqueue_triage_info =                                  0x4b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfmemory_offset =                                         0x4c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfobject_triage_info =                                    0x4d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfqueue_triage_info =                                     0x4e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfrequest_triage_info =                                   0x4f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        index_wdfcx_power_policy_event_callbacks =                       0x50,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_structure_table_num_entries =                                0x51,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                           
};
