#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6inquiry3_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6INQUIRY3]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6inquiry3_t                      
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                     
        _m00 uint8_t operation_code;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t enable_vital_product_data;  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .EnableVitalProductData
        _m02 uint1_t command_support_data;       //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .CommandSupportData
        _m03 uint8_t page_code;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PageCode
        _m04 uint8_t allocation_length;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationLength
        _m05 uint8_t control;                    //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                               
        SDK_NONVOL_PROPERTIES( "_CDB6INQUIRY3.$", 0x6, true, 0x5da1298061f8258b );                          
        SDK_FIXED_SIZE( cdb6inquiry3_t, 0x6 );                          
    };                                         
};
#include "magic/cdb6inquiry3_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6inquiry3_t, 0x6 );
