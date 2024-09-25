#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PM_COMPONENT_ID]
    //  Windows 10 v1607
    //
    enum class pm_component_id_t : int32_t
    {                                     
        unspecified =  0x0,                 // Windows 10 v1607
        tcpip_rs =     0x1,                 // Windows 10 v1607
        dhc_pv4 =      0x2,                 // Windows 10 v1607
        dhc_pv6 =      0x3,                 // Windows 10 v1607
        wlan =         0x4,                 // Windows 10 v1607
        wwan =         0x5,                 // Windows 10 v1607
        wcm =          0x6,                 // Windows 10 v1607
        ncsi =         0x7,                 // Windows 10 v1607
        test =         0x8,                 // Windows 10 v1607
        eap_sim =      0x9,                 // Windows 10 v1607
        tcpip_oid =    0xa,                 // Windows 10 v1607
        tcpip_data =   0xb,                 // Windows 10 v1607
        tcpip_dad =    0xc,                 // Windows 10 v1607
        geolocation =  0xd,                 // Windows 10 v1607
        wlan_net_mgr = 0xe,                 // Windows 10 v1607
        maximum =      0xf,                 // Windows 10 v1607
    };                                    
};
