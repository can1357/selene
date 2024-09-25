#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6inquiry_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6INQUIRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6inquiry_t                 
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m02 uint8_t page_code;            //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PageCode
        _m03 uint8_t i_reserved;           //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .IReserved
        _m04 uint8_t allocation_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationLength
        _m05 uint8_t control;              //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                         
        SDK_NONVOL_PROPERTIES( "_CDB6INQUIRY.$", 0x6, true, 0x9a720195e86c6c45 );                    
        SDK_FIXED_SIZE( cdb6inquiry_t, 0x6 );                    
    };                                   
};
#include "magic/cdb6inquiry_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6inquiry_t, 0x6 );
