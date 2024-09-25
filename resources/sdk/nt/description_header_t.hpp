#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/description_header_t.start.hpp"
namespace nt
{
    // [struct _DESCRIPTION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct description_header_t               
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            signature;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t            length;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint8_t             revision;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Revision
        _m03 uint8_t             checksum;      //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .Checksum
        _m04 sdk::array<char, 6> oemid;         //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .OEMID
        _m05 sdk::array<char, 8> oem_table_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OEMTableID
        _m06 uint32_t            oem_revision;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OEMRevision
        _m07 sdk::array<char, 4> creator_id;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CreatorID
        _m08 uint32_t            creator_rev;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreatorRev
                                              
        SDK_MAGIC_PROPERTIES( "_DESCRIPTION_HEADER.$", 0x24, true, 0x95700b4b276d1957 );             
        SDK_FIXED_SIZE( description_header_t, 0x24 );             
    };                                        
};
#include "magic/description_header_t.end.hpp"
SDK_VERIFY( struct nt::description_header_t, 0x24 );
