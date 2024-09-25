#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_pofx_perf_state_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_PERF_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_perf_state_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t version;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint64_t value;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
        _m03 void*    context;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
                                 
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_PERF_STATE.$", 0x18, true, 0x10f5e3815c2b0e5 );        
        SDK_FIXED_SIZE( stor_pofx_perf_state_t, 0x18 );        
    };                           
};
#include "magic/stor_pofx_perf_state_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_perf_state_t, 0x18 );
