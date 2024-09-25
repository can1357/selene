#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6readwritetape_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6READWRITETAPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6readwritetape_t        
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t vendor_specific;   //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .VendorSpecific
        _m02 uint8_t transfer_len_msb;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TransferLenMSB
        _m03 uint8_t transfer_len;      //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .TransferLen
        _m04 uint8_t transfer_len_lsb;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TransferLenLSB
        _m05 uint1_t link;              //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .Link
        _m06 uint1_t flag;              //{ +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  } | .Flag
        _m07 uint2_t vendor_unique;     //{ +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  } | .VendorUnique
                                      
        SDK_NONVOL_PROPERTIES( "_CDB6READWRITETAPE.$", 0x6, true, 0x89b1cfb53df347e );                 
        SDK_FIXED_SIZE( cdb6readwritetape_t, 0x6 );                 
    };                                
};
#include "magic/cdb6readwritetape_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6readwritetape_t, 0x6 );
