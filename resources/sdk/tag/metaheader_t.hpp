#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/metaheader_t.start.hpp"
namespace tag
{
    // [struct tagMETAHEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct metaheader_t                
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint16_t mt_type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .mtType
        _m01 uint16_t mt_header_size;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .mtHeaderSize
        _m02 uint16_t mt_version;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .mtVersion
        _m03 uint32_t mt_size;           //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .mtSize
        _m04 uint16_t mt_no_objects;     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .mtNoObjects
        _m05 uint32_t mt_max_record;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .mtMaxRecord
        _m06 uint16_t mt_no_parameters;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .mtNoParameters
                                       
        SDK_NONVOL_PROPERTIES( "tagMETAHEADER.$", 0x12, true, 0x16c9dc1b030f6982 );                 
        SDK_FIXED_SIZE( metaheader_t, 0x12 );                 
    };                                 
};
#include "magic/metaheader_t.end.hpp"
SDK_VERIFY( struct tag::metaheader_t, 0x12 );
