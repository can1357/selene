#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eisa_slot_information_t.start.hpp"
namespace cm
{
    // [struct _CM_EISA_SLOT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_slot_information_t         
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint8_t  return_code;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReturnCode
        _m01 uint8_t  return_flags;          //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ReturnFlags
        _m02 uint8_t  major_revision;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MajorRevision
        _m03 uint8_t  minor_revision;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .MinorRevision
        _m04 uint16_t checksum;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Checksum
        _m05 uint8_t  number_functions;      //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberFunctions
        _m06 uint8_t  function_information;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .FunctionInformation
        _m07 uint32_t compressed_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompressedId
                                           
        SDK_NONVOL_PROPERTIES( "_CM_EISA_SLOT_INFORMATION.$", 0xc, true, 0x4cff8f325eba2152 );                     
        SDK_FIXED_SIZE( eisa_slot_information_t, 0xc );                     
    };                                     
};
#include "magic/eisa_slot_information_t.end.hpp"
SDK_VERIFY( struct cm::eisa_slot_information_t, 0xc );
