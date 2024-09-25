#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_EXPRESS_WAKE_STATES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class express_wake_states_t : int32_t
    {                                         
        armed_off =               0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed_on =                0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed_stirring =          0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed_stirring_wait =     0x3,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        complete_dereferenced =   0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced_sent =       0x5,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed_dozing =         0x6,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed_off =            0x7,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed_on =             0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed_stirring =       0x9,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_cancelled =     0xa,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_complete =      0xb,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_off =           0xc,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_stirring =      0xd,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_stirring_wait = 0xe,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarming_triggered =     0xf,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_dereferenced =     0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_dozing =           0x11,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_sent =             0x12,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_triggered =        0x13,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queuing_dozing =          0x14,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stirring_cancelled =      0x15,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stirring_triggered =      0x16,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_complete =      0x17,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_dereferenced =  0x18,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_off =           0x19,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_ready =         0x1a,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                 0x1b,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
