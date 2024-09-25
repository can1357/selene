#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ata_passthrough16_t.start.hpp"
namespace stor::port
{
    // [struct _ATA_PASSTHROUGH16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ata_passthrough16_t        
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t extend;            //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Extend
        _m02 uint4_t protocol;          //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Protocol
        _m03 uint3_t multiple_count;    //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .MultipleCount
        _m04 uint2_t t_length;          //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .TLength
        _m05 uint1_t byte_block;        //{ +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  +0x0002@2  } | .ByteBlock
        _m06 uint1_t t_dir;             //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .TDir
        _m07 uint1_t ck_cond;           //{ +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  +0x0002@5  } | .CkCond
        _m08 uint2_t offline;           //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .Offline
        _m09 uint8_t features15_8;      //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Features15_8
        _m10 uint8_t features7_0;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Features7_0
        _m11 uint8_t sector_count15_8;  //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .SectorCount15_8
        _m12 uint8_t sector_count7_0;   //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SectorCount7_0
        _m13 uint8_t lba_low15_8;       //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .LbaLow15_8
        _m14 uint8_t lba_low7_0;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LbaLow7_0
        _m15 uint8_t lba_mid15_8;       //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .LbaMid15_8
        _m16 uint8_t lba_mid7_0;        //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .LbaMid7_0
        _m17 uint8_t lba_high15_8;      //{ +0x000b    +0x000b    +0x000b    +0x000b    +0x000b    } | .LbaHigh15_8
        _m18 uint8_t lba_high7_0;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .LbaHigh7_0
        _m19 uint8_t device;            //{ +0x000d    +0x000d    +0x000d    +0x000d    +0x000d    } | .Device
        _m20 uint8_t command;           //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Command
        _m21 uint8_t control;           //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                      
        SDK_NONVOL_PROPERTIES( "_ATA_PASSTHROUGH16.$", 0x10, true, 0xeb78f228ab0156bc );                 
        SDK_FIXED_SIZE( ata_passthrough16_t, 0x10 );                 
    };                                
};
#include "magic/ata_passthrough16_t.end.hpp"
SDK_VERIFY( struct stor::port::ata_passthrough16_t, 0x10 );
