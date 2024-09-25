#pragma once
#include <sdkgen/support_library.hpp>

namespace dmm
{
    // [enum _DMM_MONITOR_PRESENCE_EVENT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class monitor_presence_event_type_t : int32_t
    {                                                 
        uninitialized =          0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addmonitor =             0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removemonitor =          0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driverarrival =          0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driverqueryremove =      0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driverremovecancelled =  0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driverremovecomplete =   0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        devicenodeready =        0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        edidchange =             0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitordisable =         0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitorenable =          0xa,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adapteradd =             0xb,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        adapterremoval =         0xc,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalidation =           0xd,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitorpowerctl =        0xe,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        addsimulatedmonitor =    0x40000001,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maxvalid =               0x40000002,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removesimulatedmonitor = 0x40000002,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
