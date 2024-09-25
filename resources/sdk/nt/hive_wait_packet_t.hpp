#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/hive_wait_packet_t.start.hpp"
namespace nt
{
    struct hive_wait_packet_t;

    // [struct _HIVE_WAIT_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hive_wait_packet_t                          
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                             
        _m00 struct nt::kevent_t            wake_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WakeEvent
        _m01 int32_t                        status;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Status
        _m02 struct nt::hive_wait_packet_t* next;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Next
                                                       
        SDK_MAGIC_PROPERTIES( "_HIVE_WAIT_PACKET.$", 0x28, true, 0x4b3800163daac5f1 );           
        SDK_FIXED_SIZE( hive_wait_packet_t, 0x28 );           
    };                                                 
};
#include "magic/hive_wait_packet_t.end.hpp"
SDK_VERIFY( struct nt::hive_wait_packet_t, 0x28 );
