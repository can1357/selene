#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_identification_descriptor_t.start.hpp"
namespace stor::port
{
    // [struct _VPD_IDENTIFICATION_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vpd_identification_descriptor_t         
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 uint4_t             code_set;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CodeSet
        _m01 uint4_t             identifier_type;    //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .IdentifierType
        _m02 uint2_t             association;        //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .Association
        _m03 uint8_t             identifier_length;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .IdentifierLength
        _m04 sdk::array<uint8_t> identifier;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Identifier
                                                   
        SDK_NONVOL_PROPERTIES( "_VPD_IDENTIFICATION_DESCRIPTOR.$", 0x4, true, 0xb09348dbcb2dc37e );                  
        SDK_FIXED_SIZE( vpd_identification_descriptor_t, 0x4 );                  
    };                                             
};
#include "magic/vpd_identification_descriptor_t.end.hpp"
SDK_VERIFY( struct stor::port::vpd_identification_descriptor_t, 0x4 );
