#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_RATE_CONTROL_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rate_control_type_t : int32_t       
    {                                              
        cap_min =                           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iops_cap =                          0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth_cap =                     0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cap_max =                           0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_percent_cap =                  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iops_reservation =                  0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reservation_min =                   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth_reservation =             0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reservation_max =                   0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_percent_reservation =          0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        critical_reservation_min =          0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iops_critical_reservation =         0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth_critical_reservation =    0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        critical_reservation_max =          0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_percent_critical_reservation = 0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iops_soft_cap =                     0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        soft_cap_min =                      0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth_soft_cap =                0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        soft_cap_max =                      0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_percent_soft_cap =             0xb,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iops_limit_excess_notify =          0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limit_excess_notify_min =           0xc,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth_limit_excess_notify =     0xd,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        limit_excess_notify_max =           0xe,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        time_percent_limit_excess_notify =  0xe,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                               0xf,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
