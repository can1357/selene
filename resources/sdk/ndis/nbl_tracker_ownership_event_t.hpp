#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NBL_TRACKER_OWNERSHIP_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nbl_tracker_ownership_event_t : int32_t
    {                                                 
        miniport_indicated =              0x80,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_indicated_resources =    0x81,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_indicated =                0x82,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_indicated_resources =      0x83,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indicated_to_protocol =           0x84,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indicated_to_protocol_resources = 0x85,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indicated_to_protocol_packet =    0x86,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_returned =               0x87,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_returned_resources =     0x88,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_returned_packet =        0x89,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_returned =                 0x8a,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returned_to_filter =              0x8b,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returned_to_filter_resources =    0x8c,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returned_to_miniport =            0x8d,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        returned_to_miniport_resources =  0x8e,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol_sent =                   0x8f,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_sent =                     0x90,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent_to_filter =                  0x91,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent_to_miniport =                0x92,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport_send_completed =         0x93,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_send_completed =           0x94,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_completed_to_open =          0x95,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_received =                 0x96,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_returned =                 0x97,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_sent =                     0x98,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_send_completed =           0x99,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other_datapath =                  0x9a,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loopback_indicated =              0x9b,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //ownership_max =                 0x9b,         // Windows 10 v1607
        loopback_returned =               0x9c,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ownership_max =                   0x9d,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
