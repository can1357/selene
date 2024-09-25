#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_CONVENTIONAL_WAKE_STATES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class conventional_wake_states_t : int32_t
    {                                              
        armed =                          0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        armed_dozing =                   0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceled_referenced =            0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceled_referenced_dozing =     0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceled_referenced_incomplete = 0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        canceled_wait =                  0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced =                   0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced_canceled =          0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced_dozing =            0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced_triggered =         0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dereferenced_waiting =           0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed =                       0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disarmed_dozing =                0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dozing_referenced =              0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dozing_referenced_canceled =     0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dozing_referenced_complete =     0xf,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_dereferenced =            0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_dozing =                  0x11,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queued_triggered =               0x12,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        referenced =                     0x13,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        referenced_canceled =            0x14,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_dozing =               0x15,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_queued =               0x16,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triggered_queued_dozing =        0x17,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ww_queued =                      0x18,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                        0x19,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
