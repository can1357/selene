#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_RECOVERY_FAILURE_REASON]
    //  Windows 11
    //
    enum class recovery_failure_reason_t : int32_t          
    {                                                       
        kernel_could_not_mark_memory_bad =          0x1,      // Windows 11
        kernel_mark_memory_bad_timed_out =          0x2,      // Windows 11
        no_recovery_context =                       0x3,      // Windows 11
        not_continuable =                           0x4,      // Windows 11
        pcc =                                       0x5,      // Windows 11
        overflow =                                  0x6,      // Windows 11
        not_supported =                             0x7,      // Windows 11
        misc_or_addr_not_valid =                    0x8,      // Windows 11
        invalid_address_mode =                      0x9,      // Windows 11
        high_irql =                                 0xa,      // Windows 11
        insufficient_alt_context_wrappers =         0xb,      // Windows 11
        interrupts_disabled =                       0xc,      // Windows 11
        swap_busy =                                 0xd,      // Windows 11
        stack_overflow =                            0xe,      // Windows 11
        unexpected_failure =                        0xf,      // Windows 11
        kernel_will_page_fault_bc_at_current_irql = 0x10,     // Windows 11
        max =                                       0x11,     // Windows 11
    };                                                      
};
