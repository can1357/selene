#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DEVICE_POWER_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_power_state_t : int32_t                
    {                                                        
        invalid =                                  0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_created =                           0x300,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_device_type =                        0x301,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_parent_state =                       0x303,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabling_wake_at_bus =                     0x305,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0 =                                       0x307,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_bus_wake_owner =                        0x309,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_armed_for_wake =                        0x30b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_disarming_wake_at_bus =                 0x30d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_starting =                              0x30f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_starting_connect_interrupt =            0x310,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_starting_dma_enable =                   0x311,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_starting_start_self_managed_io =        0x312,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decide_d0_state =                          0x313,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_d3_stopped =                          0x314,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =                                  0x315,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_check_device_type =               0x316,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        starting_child =                           0x317,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_disabling_wake_at_bus =                 0x318,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx =                                  0x31a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_io_stopped =                       0x31c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx =                                       0x31f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_armed_for_wake =                   0x321,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_io_stopped_armed_for_wake =        0x323,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_armed_for_wake =                        0x325,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_parent_state_armed_for_wake =        0x327,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_parent_armed_for_wake =           0x329,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io =                    0x32b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io_failed =             0x32d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_parent =                          0x32f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_pending =                             0x331,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking =                                   0x333,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_connect_interrupt =                 0x335,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_connect_interrupt_failed =          0x337,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_dma_enable =                        0x339,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_dma_enable_failed =                 0x33b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_power_up_failed_deref_parent =      0x33d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_power_up_failed =                   0x33e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_failed_power_down =                  0x33f,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        report_power_down_failed =                 0x340,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_connect_interrupt_failed =         0x341,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_dma_enable_failed =                0x342,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_self_managed_io_failed =           0x343,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_power_up_failed_deref_parent =     0x344,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_power_up_failed =                  0x345,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped_disarm_wake =                   0x346,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_stopped =                          0x349,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped =                               0x34a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_stopped =                             0x34b,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped_complete_dx =                      0x34c,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped_decide_dx_state =               0x34d,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped_arm_for_wake =                  0x34e,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final_power_down_failed =                  0x350,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        final =                                    0x351,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_implicit_d3_disarm_wake_at_bus =      0x352,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up_failed =                                0x353,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up_failed_deref_parent =                   0x354,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_failed =                           0x355,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_stopped_disable_interrupt =        0x356,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifying_d0_exit_to_wake_interrupts =     0x359,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifying_d0_entry_to_wake_interrupts =    0x35a,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_power_up_failed_power_down =       0x35d,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //null =                                   0x35d,      // WDK 10
        up_failed_power_down =                     0x35e,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_self_managed_io_failed_started =   0x360,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io_failed_started =     0x361,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //null =                                   0x363,      // Windows 10 v1607
        waking_post_hardware_enabled =             0x363,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_post_hardware_enabled_failed =      0x365,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_starting_post_hardware_enabled =        0x367,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        initial_post_hardware_enabled_failed =     0x368,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        null =                                     0x369,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_device_type_np =                     0x8302,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_parent_state_np =                    0x8304,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabling_wake_at_bus_np =                  0x8306,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0np =                                     0x8308,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_bus_wake_owner_np =                     0x830a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_armed_for_wake_np =                     0x830c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0_disarming_wake_at_bus_np =              0x830e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_disabling_wake_at_bus_np =              0x8319,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_np =                               0x831b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_io_stopped_np =                    0x831d,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_np_failed =                        0x831e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_np =                                    0x8320,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_armed_for_wake_np =                0x8322,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_io_stopped_armed_for_wake_np =     0x8324,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_armed_for_wake_np =                     0x8326,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_parent_state_armed_for_wake_np =     0x8328,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_parent_armed_for_wake_np =        0x832a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io_np =                 0x832c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io_failed_np =          0x832e,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_parent_np =                       0x8330,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wake_pending_np =                          0x8332,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_np =                                0x8334,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_connect_interrupt_np =              0x8336,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_connect_interrupt_failed_np =       0x8338,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_dma_enable_np =                     0x833a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_dma_enable_failed_np =              0x833c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped_disarm_wake_np =                0x8347,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        goto_dx_stopped_disable_interrupt_np =     0x8348,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dx_stopped_arm_for_wake_np =               0x834f,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up_failed_np =                             0x8357,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up_failed_deref_parent_np =                0x8358,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifying_d0_exit_to_wake_interrupts_np =  0x835b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifying_d0_entry_to_wake_interrupts_np = 0x835c,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        up_failed_power_down_np =                  0x835f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_self_managed_io_failed_started_np =  0x8362,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_post_hardware_enabled_np =          0x8364,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        waking_post_hardware_enabled_failed_np =   0x8366,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
