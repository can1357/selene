#pragma once
#include <sdkgen/support_library.hpp>
#include "error_severity_t.hpp"
#include "generic_error_blockstatus_t.hpp"

#include "magic/generic_error_t.start.hpp"
namespace whea
{
    // [struct _WHEA_GENERIC_ERROR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_error_t                                           
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                           
        _m00 union whea::generic_error_blockstatus_t block_status;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockStatus
        _m01 uint32_t                                raw_data_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RawDataOffset
        _m02 uint32_t                                raw_data_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RawDataLength
        _m03 uint32_t                                data_length;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DataLength
        _m04 enum whea::error_severity_t             error_severity;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorSeverity
        _m05 sdk::array<uint8_t, 1>                  data;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Data
                                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_GENERIC_ERROR.$", 0x15, true, 0xc4f68081fecbdbf4 );                
        SDK_FIXED_SIZE( generic_error_t, 0x15 );                     
    };                                                               
};
#include "magic/generic_error_t.end.hpp"
SDK_VERIFY( struct whea::generic_error_t, 0x15 );
