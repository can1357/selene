#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rxact_log_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RXACT_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rxact_log_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t operation_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCount
        _m01 uint32_t log_size;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LogSize
        _m02 uint32_t log_size_in_use;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogSizeInUse
        _m03 uint32_t alignment;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Alignment
                                      
        SDK_MAGIC_PROPERTIES( "_RTL_RXACT_LOG.$", 0x10, true, 0x11447c0817303e1 );                
        SDK_FIXED_SIZE( rxact_log_t, 0x10 );                
    };                                
};
#include "magic/rxact_log_t.end.hpp"
SDK_VERIFY( struct rtl::rxact_log_t, 0x10 );
