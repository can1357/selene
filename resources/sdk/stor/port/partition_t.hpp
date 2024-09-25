#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_t.start.hpp"
namespace stor::port
{
    // [struct _PARTITION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct partition_t                
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t operation_code;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint1_t immediate;         //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .Immediate
        _m02 uint1_t sel;               //{ +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  +0x0001@1  } | .Sel
        _m03 uint6_t partition_select;  //{ +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  +0x0001@2  } | .PartitionSelect
        _m04 uint8_t control;           //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Control
                                      
        SDK_NONVOL_PROPERTIES( "_PARTITION.$", 0x6, true, 0xfe857e56d952e9e );                 
        SDK_FIXED_SIZE( partition_t, 0x6 );                 
    };                                
};
#include "magic/partition_t.end.hpp"
SDK_VERIFY( struct stor::port::partition_t, 0x6 );
