#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nec_read_cdda_t.start.hpp"
namespace stor::port
{
    // [struct _NEC_READ_CDDA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct nec_read_cdda_t                
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t operation_code;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint8_t logical_block_byte0;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LogicalBlockByte0
        _m02 uint8_t logical_block_byte1;   //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .LogicalBlockByte1
        _m03 uint8_t logical_block_byte2;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LogicalBlockByte2
        _m04 uint8_t logical_block_byte3;   //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .LogicalBlockByte3
        _m05 uint8_t transfer_block_byte0;  //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .TransferBlockByte0
        _m06 uint8_t transfer_block_byte1;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransferBlockByte1
        _m07 uint8_t control;               //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Control
                                          
        SDK_NONVOL_PROPERTIES( "_NEC_READ_CDDA.$", 0xa, true, 0xc4174f03121b83b9 );                     
        SDK_FIXED_SIZE( nec_read_cdda_t, 0xa );                     
    };                                    
};
#include "magic/nec_read_cdda_t.end.hpp"
SDK_VERIFY( struct stor::port::nec_read_cdda_t, 0xa );
