#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in_addr_t.hpp"

#include "magic/ipv4_header_t.start.hpp"
namespace ndis
{
    // [struct _IPV4_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ipv4_header_t                                        
    {                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                      
        _m00 uint8_t              version_and_header_length;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VersionAndHeaderLength
        _m01 uint4_t              header_length;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HeaderLength
        _m02 uint4_t              version;                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Version
        _m03 uint8_t              type_of_service_and_ecn_field;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .TypeOfServiceAndEcnField
        _m04 uint2_t              ecn_field;                      //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .EcnField
        _m05 uint6_t              type_of_service;                //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .TypeOfService
        _m06 uint16_t             total_length;                   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TotalLength
        _m07 uint16_t             identification;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Identification
        _m08 uint16_t             flags_and_offset;               //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .FlagsAndOffset
        _m09 uint5_t              dont_use1;                      //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .DontUse1
        _m10 uint1_t              more_fragments;                 //{ +0x0006@5  +0x0006@5  +0x0006@5  +0x0006@5  +0x0006@5  } | .MoreFragments
        _m11 uint1_t              dont_fragment;                  //{ +0x0006@6  +0x0006@6  +0x0006@6  +0x0006@6  +0x0006@6  } | .DontFragment
        _m12 uint8_t              dont_use2;                      //{ +0x0006@8  +0x0006@8  +0x0006@8  +0x0006@8  +0x0006@8  } | .DontUse2
        _m13 uint8_t              time_to_live;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeToLive
        _m14 uint8_t              protocol;                       //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Protocol
        _m15 uint16_t             header_checksum;                //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .HeaderChecksum
        _m16 struct nt::in_addr_t source_address;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SourceAddress
        _m17 struct nt::in_addr_t destination_address;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DestinationAddress
                                                                
        SDK_NONVOL_PROPERTIES( "_IPV4_HEADER.$", 0x14, true, 0x56e285e73001410 );                              
        SDK_FIXED_SIZE( ipv4_header_t, 0x14 );                              
    };                                                          
};
#include "magic/ipv4_header_t.end.hpp"
SDK_VERIFY( struct ndis::ipv4_header_t, 0x14 );
