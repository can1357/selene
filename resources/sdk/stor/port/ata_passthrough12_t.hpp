#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ata_passthrough12_t.start.hpp"
namespace stor::port
{
    // [struct _ATA_PASSTHROUGH12]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ata_passthrough12_t      
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                          
        _m00 uint8_t operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint4_t protocol;        //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Protocol
        _m02 uint3_t multiple_count;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .MultipleCount
        _m03 uint2_t t_length;        //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .TLength
        _m04 uint1_t byte_block;      //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .ByteBlock
        _m05 uint1_t t_dir;           //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .TDir
        _m06 uint1_t ck_cond;         //{ +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  } | .CkCond
        _m07 uint2_t offline;         //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .Offline
        _m08 uint8_t features;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Features
        _m09 uint8_t sector_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SectorCount
        _m10 uint8_t lba_low;         //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .LbaLow
        _m11 uint8_t lba_mid;         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .LbaMid
        _m12 uint8_t lba_high;        //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .LbaHigh
        _m13 uint8_t device;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Device
        _m14 uint8_t command;         //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Command
        _m15 uint8_t control;         //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .Control
                                    
        SDK_NONVOL_PROPERTIES( "_ATA_PASSTHROUGH12.$", 0xc, true, 0x194e35833ff29fad );               
        SDK_FIXED_SIZE( ata_passthrough12_t, 0xc );               
    };                              
};
#include "magic/ata_passthrough12_t.end.hpp"
SDK_VERIFY( struct stor::port::ata_passthrough12_t, 0xc );
