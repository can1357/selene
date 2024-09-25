#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FX_OBJECT_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_types_t : int32_t             
    {                                               
        fx_type_object =                  0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_driver =                  0x1001,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_device =                  0x1002,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_queue =                   0x1003,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_wmi_provider =            0x1004,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_reg_key =                 0x1006,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_string =                  0x1007,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_request =                 0x1008,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_lookaside =               0x1009,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ifx_type_memory =                 0x100a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_irpqueue =                0x100b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_userobject =              0x100c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_collection =              0x100e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_ring_buffer =             0x100f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_ring_buffer_read_head =   0x1010,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_verifierlock =            0x1012,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_systemthread =            0x1013,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_mp_device =               0x1014,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_dpc =                     0x1015,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_resource_io =             0x1016,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_resource_cm =             0x1017,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_fileobject =              0x1018,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_related_device =          0x1021,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_memory_preallocated =     0x1022,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_wait_lock =               0x1023,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_spin_lock =               0x1024,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_workitem =                0x1025,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_cleanuplist =             0x1026,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_interrupt =               0x1027,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_timer =                   0x1028,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_child_list =              0x1029,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_device_base =             0x1030,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_systemworkitem =          0x1031,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_request_memory =          0x1032,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_disposelist =             0x1033,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_wmi_instance =            0x1034,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_res_list =             0x1035,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_cm_res_list =             0x1036,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_res_req_list =         0x1037,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_companion_target =        0x1038,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_companion =               0x1039,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_task_queue =              0x1040,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_package_io =              0x1100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_package_fdo =             0x1101,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_package_pdo =             0x1102,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_wmi_irp_handler =         0x1103,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_package_general =         0x1104,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_default_irp_handler =     0x1105,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_wmi_tracing_irp_handler = 0x1106,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_target =               0x1200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_target_remote =        0x1201,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_target_usb_device =    0x1202,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_target_usb_pipe =      0x1203,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_usb_interface =           0x1204,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_io_target_self =          0x1205,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_dma_enabler =             0x1400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_dma_transaction =         0x1401,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_common_buffer =           0x1402,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_iassociate =              0x1501,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_ihascallbacks =           0x1503,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fx_type_none =                    0xffff,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
