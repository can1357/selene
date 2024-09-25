#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HAM_TERMINATE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ham_terminate_reason_t : int32_t
    {                                          
        invalid =                    0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        first_valid =                0x100,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =                       0x100,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_request =             0x200,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_contract_violation =     0x300,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        servicing =                  0x400,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bg_task_contract_violation = 0x500,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        debug_api =                  0x600,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resource_manager =           0x700,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        blocking_cs =                0x800,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        registration_failed =        0x900,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cache_expired =              0xa00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        manager_rundown =            0xb00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        required_process_exit =      0xc00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_activation =          0xd00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        quiesce_timeout =            0xe00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_redirected =      0xf00,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_conflict =              0x1000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        logoff =                     0x1100,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminate_if_suspended =     0x1200,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        state_remediation =          0x1300,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        view_manager_abort =         0x1400,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        new_activation =             0x1500,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fatal_error_report =         0x1600,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app_request =                0x1700,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        broker_infrastructure =      0x1800,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        capability_lost =            0x1900,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activity_manager_diconnect = 0x1a00,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =                      0x1b00,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
