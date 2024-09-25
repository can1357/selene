#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/datainfo_t.start.hpp"
namespace tag
{
    // [struct _tagDATAINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct datainfo_t                    
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t ul_total_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulTotalSize
        _m01 uint32_t ulavr_packet_size;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulavrPacketSize
        _m02 uint32_t ul_connect_speed;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulConnectSpeed
        _m03 uint32_t ul_processor_speed;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulProcessorSpeed
                                         
        SDK_MAGIC_PROPERTIES( "_tagDATAINFO.$", 0x10, true, 0x114d2f3ecab84fcf );                   
        SDK_FIXED_SIZE( datainfo_t, 0x10 );                   
    };                                   
};
#include "magic/datainfo_t.end.hpp"
SDK_VERIFY( struct tag::datainfo_t, 0x10 );
