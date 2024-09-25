#pragma once
#include <sdkgen/support_library.hpp>

namespace hal
{
    // [enum _HAL_INIT_PHASE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class init_phase_t : int32_t                        
    {                                                        
        bsp_proc_early =                             0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_proc_early_mm_ready =                    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_proc_early_timer_ready =                 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_proc_early_end =                         0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_proc_early =                              0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //pn_proc_early_end =                        0x5,      // Windows 10 v1607
        pn_proc_early_interrupts_ready =             0x5,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early =                         0x6,      // Windows 10 v1607
        pn_proc_early_end =                          0x6,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_system_early =                           0x7,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_acpi_ready =              0x7,      // Windows 10 v1607
        bsp_system_early_acpi_ready =                0x8,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_hal_extensions_ready =    0x8,      // Windows 10 v1607
        bsp_system_early_hal_extensions_ready =      0x9,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_interrupts_almost_ready = 0x9,      // Windows 10 v1607
        bsp_system_early_interrupts_almost_ready =   0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_iommus_ready =            0xa,      // Windows 10 v1607
        //bsp_system_early_dma_ready =               0xb,      // Windows 10 v1607
        //bsp_system_early_interrupts_ready =        0xb,      // Windows 10 v1607
        bsp_system_early_iommus_ready =              0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_system_early_dma_ready =                 0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_system_early_interrupts_ready =          0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_proc_ready =              0xc,      // Windows 10 v1607
        //bsp_system_early_hw_perf_cnt_ready =       0xd,      // Windows 10 v1607
        bsp_system_early_proc_ready =                0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_early_end =                     0xe,      // Windows 10 v1607
        bsp_system_early_hw_perf_cnt_ready =         0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsp_system_early_allocation_done =           0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_late =                          0xf,      // Windows 10 v1607
        bsp_system_early_end =                       0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //bsp_system_late_end =                      0x10,     // Windows 10 v1607
        bsp_system_late =                            0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //pn_system_late =                           0x11,     // Windows 10 v1607
        bsp_system_late_end =                        0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //pn_system_late_end =                       0x12,     // Windows 10 v1607
        //all_proc_start_complete =                  0x13,     // Windows 10 v1607
        pn_system_late =                             0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //all_proc_start_complete_end =              0x14,     // Windows 10 v1607
        pn_system_late_end =                         0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //acpi_pdo_started =                         0x15,     // Windows 10 v1607
        all_proc_start_complete =                    0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //acpi_pdo_started_end =                     0x16,     // Windows 10 v1607
        all_proc_start_complete_end =                0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ex_phase1_ready =                            0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //report_resources =                         0x17,     // Windows 10 v1607
        ex_phase1_ready_end =                        0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //report_resources_end =                     0x18,     // Windows 10 v1607
        acpi_pdo_started =                           0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //report_core_system_resources =             0x19,     // Windows 10 v1607
        acpi_pdo_started_end =                       0x1a,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //report_core_system_resources_end =         0x1a,     // Windows 10 v1607
        initialize_telemetry =                       0x1b,     // Windows 10 v1607
        report_resources =                           0x1b,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_resources_end =                       0x1c,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_ready =                            0x1c,     // Windows 10 v1607
        report_core_system_resources =               0x1d,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        telemetry_end =                              0x1d,     // Windows 10 v1607
        report_core_system_resources_end =           0x1e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        late_system_actions =                        0x1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        late_system_actions_telemetry_ready =        0x20,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        late_system_actions_end =                    0x21,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
