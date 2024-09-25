#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_toc_t.start.hpp"
namespace stor::port
{
    // [struct _READ_TOC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_toc_t                                   
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t                msf;                  //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Msf
        _m02 uint3_t                logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint4_t                format2;              //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .Format2
        _m04 uint8_t                starting_track;       //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .StartingTrack
        _m05 sdk::array<uint8_t, 2> allocation_length;    //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .AllocationLength
        _m06 uint6_t                control;              //{ +0x0009@0  +0x0009@0  +0x0009@0  +0x0009@0  +0x0009@0  } | .Control
        _m07 uint2_t                format;               //{ +0x0009@6  +0x0009@6  +0x0009@6  +0x0009@6  +0x0009@6  } | .Format
                                                        
        SDK_NONVOL_PROPERTIES( "_READ_TOC.$", 0xa, true, 0x135d85a9dc20062d );                    
        SDK_FIXED_SIZE( read_toc_t, 0xa );                    
    };                                                  
};
#include "magic/read_toc_t.end.hpp"
SDK_VERIFY( struct stor::port::read_toc_t, 0xa );
