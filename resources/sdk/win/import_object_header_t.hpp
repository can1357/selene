#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_object_header_t.start.hpp"
namespace win
{
    // [struct IMPORT_OBJECT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct import_object_header_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t sig1;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sig1
        _m01 uint16_t sig2;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Sig2
        _m02 uint16_t version;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m03 uint16_t machine;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Machine
        _m04 uint32_t time_date_stamp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeDateStamp
        _m05 uint32_t size_of_data;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SizeOfData
        _m06 uint16_t ordinal;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Ordinal
        _m07 uint16_t hint;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Hint
        _m08 uint2_t  type;             //{ +0x0012@0  +0x0012@0  +0x0012@0  +0x0012@0  } | .Type
        _m09 uint3_t  name_type;        //{ +0x0012@2  +0x0012@2  +0x0012@2  +0x0012@2  } | .NameType
                                      
        SDK_MAGIC_PROPERTIES( "IMPORT_OBJECT_HEADER.$", 0x14, true, 0x22a2906befdf3cc9 );                
        SDK_FIXED_SIZE( import_object_header_t, 0x14 );                
    };                                
};
#include "magic/import_object_header_t.end.hpp"
SDK_VERIFY( struct win::import_object_header_t, 0x14 );
