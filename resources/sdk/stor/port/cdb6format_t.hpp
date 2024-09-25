#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb6format_t.start.hpp"
namespace stor::port
{
    // [struct _CDB6FORMAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cdb6format_t                  
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t operation_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t format_control;       //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .FormatControl
        _m02 uint3_t logical_unit_number;  //{ +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  +0x0001@5  } | .LogicalUnitNumber
        _m03 uint8_t f_reserved1;          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .FReserved1
        _m04 uint8_t interleave_msb;       //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .InterleaveMsb
        _m05 uint8_t interleave_lsb;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .InterleaveLsb
        _m06 uint8_t f_reserved2;          //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .FReserved2
                                         
        SDK_NONVOL_PROPERTIES( "_CDB6FORMAT.$", 0x6, true, 0x34105447bcfea8d5 );                    
        SDK_FIXED_SIZE( cdb6format_t, 0x6 );                    
    };                                   
};
#include "magic/cdb6format_t.end.hpp"
SDK_VERIFY( struct stor::port::cdb6format_t, 0x6 );
