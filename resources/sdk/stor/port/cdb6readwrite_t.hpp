#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6readwrite_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6READWRITE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6readwrite_t               
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t logical_block_msb1;   //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .LogicalBlockMsb1
        _m02 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint8_t logical_block_msb0;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockMsb0
        _m04 uint8_t logical_block_lsb;    //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .LogicalBlockLsb
        _m05 uint8_t transfer_blocks;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TransferBlocks
        _m06 uint8_t control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_CDB6READWRITE.$", 0x6, true, 0x7ef00b46369ad66 );                    
        SDK_FIXED_SIZE( cdb6readwrite_t, 0x6 );                    
    };                                   
};
#include "magic/cdb6readwrite_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6readwrite_t, 0x6 );
