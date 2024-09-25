#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mdl_t; }

#include "magic/packet_private_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_PRIVATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_private_t                           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                            
        _m00 uint32_t          physical_count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalCount
        _m01 uint32_t          total_length;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalLength
        _m02 struct nt::mdl_t* head;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Head
        _m03 struct nt::mdl_t* tail;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Tail
        _m04 void*             pool;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pool
        _m05 uint32_t          count;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Count
        _m06 uint32_t          flags;                   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Flags
        _m07 uint8_t           valid_counts;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ValidCounts
        _m08 uint8_t           ndis_packet_flags;       //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .NdisPacketFlags
        _m09 uint16_t          ndis_packet_oob_offset;  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .NdisPacketOobOffset
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_PRIVATE.$", 0x30, true, 0x20b877ce2ba4c012 );                       
        SDK_FIXED_SIZE( packet_private_t, 0x30 );                       
    };                                                
};
#include "magic/packet_private_t.end.hpp"
SDK_VERIFY( struct ndis::packet_private_t, 0x30 );
