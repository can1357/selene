#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ASTAWaitSatisfiedReason]
    //  Windows 10 v1607
    //
    enum class asta_wait_satisfied_reason_t : uint32_t
    {                                                 
        object_signaled = 0x0,                          // Windows 10 v1607
        mutex_abandoned = 0x1,                          // Windows 10 v1607
        apc_dispatched =  0x2,                          // Windows 10 v1607
        timeout =         0x3,                          // Windows 10 v1607
        failed =          0x4,                          // Windows 10 v1607
    };                                                
};
