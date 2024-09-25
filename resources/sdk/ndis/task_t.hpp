#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_TASK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class task_t : int32_t            
    {                                      
        tcp_ip_checksum_ndis_task = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip_sec_ndis_task =          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tcp_large_send_ndis_task =  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_ndis_task =             0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
