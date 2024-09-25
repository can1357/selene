#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/counters_t.start.hpp"
namespace io
{
    // [struct _IO_COUNTERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct counters_t                       
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t read_operation_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadOperationCount
        _m01 uint64_t write_operation_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .WriteOperationCount
        _m02 uint64_t other_operation_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .OtherOperationCount
        _m03 uint64_t read_transfer_count;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ReadTransferCount
        _m04 uint64_t write_transfer_count;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .WriteTransferCount
        _m05 uint64_t other_transfer_count;   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .OtherTransferCount
                                            
        SDK_NONVOL_PROPERTIES( "_IO_COUNTERS.$", 0x30, true, 0x60be39f4fa4dbdae );                      
        SDK_FIXED_SIZE( counters_t, 0x30 );                      
    };                                      
};
#include "magic/counters_t.end.hpp"
SDK_VERIFY( struct io::counters_t, 0x30 );
