#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_STRUCT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class struct_type_t : int32_t              
    {                                               
        struct_tn =                         0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_context =                    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_provider =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_sms_pdu =                    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_reserved0 =                  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_reserved1 =                  0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_reserved2 =                  0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_sms_cdma =                   0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_reserved3 =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_device_service_entry =       0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_provider2 =                  0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_device_service_guid =        0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_device_service_command_id =  0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_cellular_class =             0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_device_slot_map =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_uicc_application =           0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_register_acquisition_order = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_registration_state =         0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_signal_state =               0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_uicc_terminal_capability =   0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //struct_max =                      0x14,     // Windows 10 v1607
        struct_sar_config =                 0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_context_v2 =                 0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_network_blacklist_provider = 0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_mpdp_child_interface =       0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        struct_snssai =                     0x18,     // Windows 11
        t_struct_snssai =                   0x18,     // Windows 10 v2004, Windows 10 v20H2
        struct_rejected_snssai =            0x19,     // Windows 11
        t_struct_tai =                      0x19,     // Windows 10 v2004, Windows 10 v20H2
        struct_max =                        0x1a,     // Windows 10 v2004, Windows 10 v20H2
        struct_tai =                        0x1a,     // Windows 11
        //struct_max =                      0x1b,     // Windows 11
    };                                              
};
