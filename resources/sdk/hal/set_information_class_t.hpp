#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_SET_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class set_information_class_t : int32_t              
    {                                                         
        profile_source_interval =                     0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_source_interrupt_handler =            0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mca_register_driver =                         0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_error_handler =                        0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmc_register_driver =                         0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpe_register_driver =                         0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mca_log =                                     0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmc_log =                                     0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpe_log =                                     0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generate_cmc_interrupt =                      0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_source_timer_handler =                0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enlightenment =                               0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_dpgo_source_interrupt_handler =       0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        register_secondary_interrupt_interface =      0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_channel_power_information =               0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i386_exception_chain_terminator_information = 0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_reset_park_disposition =                  0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_psci_suspend_mode =                       0x11,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_hvci_enabled =                            0x12,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_processor_trace_interrupt_handler =       0x13,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_source_add =                          0x14,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        profile_source_remove =                       0x15,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_sw_interrupt_handler =                    0x16,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
