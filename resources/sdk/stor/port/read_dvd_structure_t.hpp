#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_dvd_structure_t.start.hpp"
namespace stor::port
{
    // [struct _READ_DVD_STRUCTURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct read_dvd_structure_t                       
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t                lun;                //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .Lun
        _m02 sdk::array<uint8_t, 4> rmd_block_number;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .RMDBlockNumber
        _m03 uint8_t                layer_number;       //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .LayerNumber
        _m04 uint8_t                format;             //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Format
        _m05 sdk::array<uint8_t, 2> allocation_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationLength
        _m06 uint2_t                agid;               //{ +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  +0x000a@6  } | .AGID
        _m07 uint8_t                control;            //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                                      
        SDK_NONVOL_PROPERTIES( "_READ_DVD_STRUCTURE.$", 0xc, true, 0x4443d5eb266efa3e );                  
        SDK_FIXED_SIZE( read_dvd_structure_t, 0xc );                  
    };                                                
};
#include "magic/read_dvd_structure_t.end.hpp"
SDK_VERIFY( struct stor::port::read_dvd_structure_t, 0xc );
