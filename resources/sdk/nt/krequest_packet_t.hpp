#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/krequest_packet_t.start.hpp"
namespace nt
{
    // [struct _KREQUEST_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct krequest_packet_t                                                 
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                                   
        _m00 sdk::array<void*, 3>                             current_packet;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentPacket
        _m01 sdk::function<void(void*, void*, void*, void*)>* worker_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WorkerRoutine
                                                                             
        SDK_MAGIC_PROPERTIES( "_KREQUEST_PACKET.$", 0x20, true, 0x6031aafa71765a31 );               
        SDK_FIXED_SIZE( krequest_packet_t, 0x20 );                           
    };                                                                       
};
#include "magic/krequest_packet_t.end.hpp"
SDK_VERIFY( struct nt::krequest_packet_t, 0x20 );
