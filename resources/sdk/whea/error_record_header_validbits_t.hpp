#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_record_header_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_ERROR_RECORD_HEADER_VALIDBITS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union error_record_header_validbits_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint1_t  platform_id;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PlatformId
        _m01 uint1_t  timestamp;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Timestamp
        _m02 uint1_t  partition_id;        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PartitionId
        _m03 uint32_t as_ulong;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                         
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_HEADER_VALIDBITS.$", 0x4, true, 0x3da0c7afa1e91ba4 );             
        SDK_FIXED_SIZE( error_record_header_validbits_t, 0x4 );             
    };                                   
};
#include "magic/error_record_header_validbits_t.end.hpp"
SDK_VERIFY( union whea::error_record_header_validbits_t, 0x4 );
