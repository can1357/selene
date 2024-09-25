#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfstructures_t.start.hpp"
namespace wdf
{
    // [struct _WDFSTRUCTURES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfstructures_t                                                           
    {                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                           
        _m000 uint64_t size_wdf_child_address_description_header;                      //{ +0x0000    +0x0000    +0x0000    } | .SIZE_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER
        _m001 uint64_t size_wdf_child_identification_description_header;               //{ +0x0008    +0x0008    +0x0008    } | .SIZE_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER
        _m002 uint64_t size_wdf_child_list_config;                                     //{ +0x0010    +0x0010    +0x0010    } | .SIZE_WDF_CHILD_LIST_CONFIG
        _m003 uint64_t size_wdf_child_list_iterator;                                   //{ +0x0018    +0x0018    +0x0018    } | .SIZE_WDF_CHILD_LIST_ITERATOR
        _m004 uint64_t size_wdf_child_retrieve_info;                                   //{ +0x0020    +0x0020    +0x0020    } | .SIZE_WDF_CHILD_RETRIEVE_INFO
        _m005 uint64_t size_wdf_class_bind_info;                                       //{ +0x0028    +0x0028    +0x0028    } | .SIZE_WDF_CLASS_BIND_INFO
        _m006 uint64_t size_wdf_class_bind_info2;                                      //{ +0x0030    +0x0030    +0x0030    } | .SIZE_WDF_CLASS_BIND_INFO2
        _m007 uint64_t size_wdf_class_extension_descriptor;                            //{ +0x0038    +0x0038    +0x0038    } | .SIZE_WDF_CLASS_EXTENSION_DESCRIPTOR
        _m008 uint64_t size_wdf_class_library_info;                                    //{ +0x0040    +0x0040    +0x0040    } | .SIZE_WDF_CLASS_LIBRARY_INFO
        _m009 uint64_t size_wdf_class_version;                                         //{ +0x0048    +0x0048    +0x0048    } | .SIZE_WDF_CLASS_VERSION
        _m010 uint64_t size_wdf_common_buffer_config;                                  //{ +0x0050    +0x0050    +0x0050    } | .SIZE_WDF_COMMON_BUFFER_CONFIG
        _m011 uint64_t size_wdf_custom_type_context;                                   //{ +0x0058    +0x0058    +0x0058    } | .SIZE_WDF_CUSTOM_TYPE_CONTEXT
        _m012 uint64_t size_wdf_device_pnp_capabilities;                               //{ +0x0060    +0x0060    +0x0060    } | .SIZE_WDF_DEVICE_PNP_CAPABILITIES
        _m013 uint64_t size_wdf_device_pnp_notification_data;                          //{ +0x0068    +0x0068    +0x0068    } | .SIZE_WDF_DEVICE_PNP_NOTIFICATION_DATA
        _m014 uint64_t size_wdf_device_power_capabilities;                             //{ +0x0070    +0x0070    +0x0070    } | .SIZE_WDF_DEVICE_POWER_CAPABILITIES
        _m015 uint64_t size_wdf_device_power_notification_data;                        //{ +0x0078    +0x0078    +0x0078    } | .SIZE_WDF_DEVICE_POWER_NOTIFICATION_DATA
        _m016 uint64_t size_wdf_device_power_policy_idle_settings;                     //{ +0x0080    +0x0080    +0x0080    } | .SIZE_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS
        _m017 uint64_t size_wdf_device_power_policy_notification_data;                 //{ +0x0088    +0x0088    +0x0088    } | .SIZE_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA
        _m018 uint64_t size_wdf_device_power_policy_wake_settings;                     //{ +0x0090    +0x0090    +0x0090    } | .SIZE_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS
        _m019 uint64_t size_wdf_device_property_data;                                  //{ +0x0098    +0x0098    +0x0098    } | .SIZE_WDF_DEVICE_PROPERTY_DATA
        _m020 uint64_t size_wdf_device_state;                                          //{ +0x00a0    +0x00a0    +0x00a0    } | .SIZE_WDF_DEVICE_STATE
        _m021 uint64_t size_wdf_dma_enabler_config;                                    //{ +0x00a8    +0x00a8    +0x00a8    } | .SIZE_WDF_DMA_ENABLER_CONFIG
        _m022 uint64_t size_wdf_dma_system_profile_config;                             //{ +0x00b0    +0x00b0    +0x00b0    } | .SIZE_WDF_DMA_SYSTEM_PROFILE_CONFIG
        _m023 uint64_t size_wdf_dpc_config;                                            //{ +0x00b8    +0x00b8    +0x00b8    } | .SIZE_WDF_DPC_CONFIG
        _m024 uint64_t size_wdf_driver_config;                                         //{ +0x00c0    +0x00c0    +0x00c0    } | .SIZE_WDF_DRIVER_CONFIG
        _m025 uint64_t size_wdf_driver_globals;                                        //{ +0x00c8    +0x00c8    +0x00c8    } | .SIZE_WDF_DRIVER_GLOBALS
        _m026 uint64_t size_wdf_driver_version_available_params;                       //{ +0x00d0    +0x00d0    +0x00d0    } | .SIZE_WDF_DRIVER_VERSION_AVAILABLE_PARAMS
        _m027 uint64_t size_wdf_fdo_event_callbacks;                                   //{ +0x00d8    +0x00d8    +0x00d8    } | .SIZE_WDF_FDO_EVENT_CALLBACKS
        _m028 uint64_t size_wdf_fileobject_config;                                     //{ +0x00e0    +0x00e0    +0x00e0    } | .SIZE_WDF_FILEOBJECT_CONFIG
        _m029 uint64_t size_wdf_interrupt_config;                                      //{ +0x00e8    +0x00e8    +0x00e8    } | .SIZE_WDF_INTERRUPT_CONFIG
        _m030 uint64_t size_wdf_interrupt_extended_policy;                             //{ +0x00f0    +0x00f0    +0x00f0    } | .SIZE_WDF_INTERRUPT_EXTENDED_POLICY
        _m031 uint64_t size_wdf_interrupt_info;                                        //{ +0x00f8    +0x00f8    +0x00f8    } | .SIZE_WDF_INTERRUPT_INFO
        _m032 uint64_t size_wdf_io_forward_progress_reserved_policy_settings;          //{ +0x0100    +0x0100    +0x0100    } | .SIZE_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS
        _m033 uint64_t size_wdf_io_queue_config;                                       //{ +0x0108    +0x0108    +0x0108    } | .SIZE_WDF_IO_QUEUE_CONFIG
        _m034 uint64_t size_wdf_io_queue_forward_progress_policy;                      //{ +0x0110    +0x0110    +0x0110    } | .SIZE_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY
        _m035 uint64_t size_wdf_io_target_open_params;                                 //{ +0x0118    +0x0118    +0x0118    } | .SIZE_WDF_IO_TARGET_OPEN_PARAMS
        _m036 uint64_t size_wdf_io_type_config;                                        //{ +0x0120    +0x0120    +0x0120    } | .SIZE_WDF_IO_TYPE_CONFIG
        _m037 uint64_t size_wdf_memory_descriptor;                                     //{ +0x0128    +0x0128    +0x0128    } | .SIZE_WDF_MEMORY_DESCRIPTOR
        _m038 uint64_t size_wdf_object_attributes;                                     //{ +0x0130    +0x0130    +0x0130    } | .SIZE_WDF_OBJECT_ATTRIBUTES
        _m039 uint64_t size_wdf_object_context_type_info;                              //{ +0x0138    +0x0138    +0x0138    } | .SIZE_WDF_OBJECT_CONTEXT_TYPE_INFO
        _m040 uint64_t size_wdf_pdo_event_callbacks;                                   //{ +0x0140    +0x0140    +0x0140    } | .SIZE_WDF_PDO_EVENT_CALLBACKS
        _m041 uint64_t size_wdf_pnppower_event_callbacks;                              //{ +0x0148    +0x0148    +0x0148    } | .SIZE_WDF_PNPPOWER_EVENT_CALLBACKS
        _m042 uint64_t size_wdf_power_framework_settings;                              //{ +0x0150    +0x0150    +0x0150    } | .SIZE_WDF_POWER_FRAMEWORK_SETTINGS
        _m043 uint64_t size_wdf_power_policy_event_callbacks;                          //{ +0x0158    +0x0158    +0x0158    } | .SIZE_WDF_POWER_POLICY_EVENT_CALLBACKS
        _m044 uint64_t size_wdf_power_routine_timed_out_data;                          //{ +0x0160    +0x0160    +0x0160    } | .SIZE_WDF_POWER_ROUTINE_TIMED_OUT_DATA
        _m045 uint64_t size_wdf_query_interface_config;                                //{ +0x0168    +0x0168    +0x0168    } | .SIZE_WDF_QUERY_INTERFACE_CONFIG
        _m046 uint64_t size_wdf_queue_fatal_error_data;                                //{ +0x0170    +0x0170    +0x0170    } | .SIZE_WDF_QUEUE_FATAL_ERROR_DATA
        _m047 uint64_t size_wdf_remove_lock_options;                                   //{ +0x0178    +0x0178    +0x0178    } | .SIZE_WDF_REMOVE_LOCK_OPTIONS
        _m048 uint64_t size_wdf_request_completion_params;                             //{ +0x0180    +0x0180    +0x0180    } | .SIZE_WDF_REQUEST_COMPLETION_PARAMS
        _m049 uint64_t size_wdf_request_fatal_error_information_length_mismatch_data;  //{ +0x0188    +0x0188    +0x0188    } | .SIZE_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA
        _m050 uint64_t size_wdf_request_forward_options;                               //{ +0x0190    +0x0190    +0x0190    } | .SIZE_WDF_REQUEST_FORWARD_OPTIONS
        _m051 uint64_t size_wdf_request_parameters;                                    //{ +0x0198    +0x0198    +0x0198    } | .SIZE_WDF_REQUEST_PARAMETERS
        _m052 uint64_t size_wdf_request_reuse_params;                                  //{ +0x01a0    +0x01a0    +0x01a0    } | .SIZE_WDF_REQUEST_REUSE_PARAMS
        _m053 uint64_t size_wdf_request_send_options;                                  //{ +0x01a8    +0x01a8    +0x01a8    } | .SIZE_WDF_REQUEST_SEND_OPTIONS
        _m054 uint64_t size_wdf_task_send_options;                                     //{ +0x01b0    +0x01b0    +0x01b0    } | .SIZE_WDF_TASK_SEND_OPTIONS
        _m055 uint64_t size_wdf_timer_config;                                          //{ +0x01b8    +0x01b8    +0x01b8    } | .SIZE_WDF_TIMER_CONFIG
        _m056 uint64_t size_wdf_triage_info;                                           //{ +0x01c0    +0x01c0    +0x01c0    } | .SIZE_WDF_TRIAGE_INFO
        _m057 uint64_t size_wdf_usb_continuous_reader_config;                          //{ +0x01c8    +0x01c8    +0x01c8    } | .SIZE_WDF_USB_CONTINUOUS_READER_CONFIG
        _m058 uint64_t size_wdf_usb_device_create_config;                              //{ +0x01d0    +0x01d0    +0x01d0    } | .SIZE_WDF_USB_DEVICE_CREATE_CONFIG
        _m059 uint64_t size_wdf_usb_device_information;                                //{ +0x01d8    +0x01d8    +0x01d8    } | .SIZE_WDF_USB_DEVICE_INFORMATION
        _m060 uint64_t size_wdf_usb_device_select_config_params;                       //{ +0x01e0    +0x01e0    +0x01e0    } | .SIZE_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS
        _m061 uint64_t size_wdf_usb_interface_select_setting_params;                   //{ +0x01e8    +0x01e8    +0x01e8    } | .SIZE_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS
        _m062 uint64_t size_wdf_usb_interface_setting_pair;                            //{ +0x01f0    +0x01f0    +0x01f0    } | .SIZE_WDF_USB_INTERFACE_SETTING_PAIR
        _m063 uint64_t size_wdf_usb_pipe_information;                                  //{ +0x01f8    +0x01f8    +0x01f8    } | .SIZE_WDF_USB_PIPE_INFORMATION
        _m064 uint64_t size_wdf_usb_request_completion_params;                         //{ +0x0200    +0x0200    +0x0200    } | .SIZE_WDF_USB_REQUEST_COMPLETION_PARAMS
        _m065 uint64_t size_wdf_wmi_instance_config;                                   //{ +0x0208    +0x0208    +0x0208    } | .SIZE_WDF_WMI_INSTANCE_CONFIG
        _m066 uint64_t size_wdf_wmi_provider_config;                                   //{ +0x0210    +0x0210    +0x0210    } | .SIZE_WDF_WMI_PROVIDER_CONFIG
        _m067 uint64_t size_wdf_workitem_config;                                       //{ +0x0218    +0x0218    +0x0218    } | .SIZE_WDF_WORKITEM_CONFIG
        _m068 uint64_t size_wdfcontext_triage_info;                                    //{ +0x0220    +0x0220    +0x0220    } | .SIZE_WDFCONTEXT_TRIAGE_INFO
        _m069 uint64_t size_wdfcontexttype_triage_info;                                //{ +0x0228    +0x0228    +0x0228    } | .SIZE_WDFCONTEXTTYPE_TRIAGE_INFO
        _m070 uint64_t size_wdfcx_fileobject_config;                                   //{ +0x0230    +0x0230    +0x0230    } | .SIZE_WDFCX_FILEOBJECT_CONFIG
        _m071 uint64_t size_wdfcx_pnppower_event_callbacks;                            //{ +0x0238    +0x0238    +0x0238    } | .SIZE_WDFCX_PNPPOWER_EVENT_CALLBACKS
        _m072 uint64_t size_wdfdevice_triage_info;                                     //{ +0x0240    +0x0240    +0x0240    } | .SIZE_WDFDEVICE_TRIAGE_INFO
        _m073 uint64_t size_wdffwdprogress_triage_info;                                //{ +0x0248    +0x0248    +0x0248    } | .SIZE_WDFFWDPROGRESS_TRIAGE_INFO
        _m074 uint64_t size_wdfirp_triage_info;                                        //{ +0x0250    +0x0250    +0x0250    } | .SIZE_WDFIRP_TRIAGE_INFO
        _m075 uint64_t size_wdfirpqueue_triage_info;                                   //{ +0x0258    +0x0258    +0x0258    } | .SIZE_WDFIRPQUEUE_TRIAGE_INFO
        _m076 uint64_t size_wdfmemory_offset;                                          //{ +0x0260    +0x0260    +0x0260    } | .SIZE_WDFMEMORY_OFFSET
        _m077 uint64_t size_wdfobject_triage_info;                                     //{ +0x0268    +0x0268    +0x0268    } | .SIZE_WDFOBJECT_TRIAGE_INFO
        _m078 uint64_t size_wdfqueue_triage_info;                                      //{ +0x0270    +0x0270    +0x0270    } | .SIZE_WDFQUEUE_TRIAGE_INFO
        _m079 uint64_t size_wdfrequest_triage_info;                                    //{ +0x0278    +0x0278    +0x0278    } | .SIZE_WDFREQUEST_TRIAGE_INFO
        _m080 uint64_t size_wdfcx_power_policy_event_callbacks;                        //{ +0x0280    +0x0280    +0x0280    } | .SIZE_WDFCX_POWER_POLICY_EVENT_CALLBACKS
                                                                                     
        SDK_MAGIC_PROPERTIES( "_WDFSTRUCTURES.$", 0x288, true, 0x24aae28ef4ac4065 );                                                              
        SDK_FIXED_SIZE( wdfstructures_t, 0x288 );                                                              
    };                                                                               
};
#include "magic/wdfstructures_t.end.hpp"
SDK_VERIFY( struct wdf::wdfstructures_t, 0x288 );
