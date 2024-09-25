#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/init_element_status_t.start.hpp"
namespace stor::port
{
    // [struct _INIT_ELEMENT_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct init_element_status_t         
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint3_t logical_unit_nubmer;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNubmer
        _m02 uint1_t no_bar_code;          //{ +0x0005@7  +0x0005@7  +0x0005@7  +0x0005@7  +0x0005@7  } | .NoBarCode
                                         
        SDK_NONVOL_PROPERTIES( "_INIT_ELEMENT_STATUS.$", 0x6, true, 0xf7a7a9b034712cca );                    
        SDK_FIXED_SIZE( init_element_status_t, 0x6 );                    
    };                                   
};
#include "magic/init_element_status_t.end.hpp"
SDK_VERIFY( struct stor::port::init_element_status_t, 0x6 );
