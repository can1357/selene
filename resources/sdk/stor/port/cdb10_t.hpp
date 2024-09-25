#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb10_t.start.hpp"
namespace stor::port
{
    // [struct _CDB10]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb10_t                       
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t relative_address;     //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .RelativeAddress
        _m02 uint1_t force_unit_access;    //{ +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  +0x0001@3  } | .ForceUnitAccess
        _m03 uint1_t disable_page_out;     //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .DisablePageOut
        _m04 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m05 uint8_t logical_block_byte0;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockByte0
        _m06 uint8_t logical_block_byte1;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .LogicalBlockByte1
        _m07 uint8_t logical_block_byte2;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LogicalBlockByte2
        _m08 uint8_t logical_block_byte3;  //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .LogicalBlockByte3
        _m09 uint8_t transfer_blocks_msb;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .TransferBlocksMsb
        _m10 uint8_t transfer_blocks_lsb;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferBlocksLsb
        _m11 uint8_t control;              //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_CDB10.$", 0xa, true, 0xd5567edaa61ae1a7 );                    
        SDK_FIXED_SIZE( cdb10_t, 0xa );                    
    };                                   
};
#include "magic/cdb10_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb10_t, 0xa );
