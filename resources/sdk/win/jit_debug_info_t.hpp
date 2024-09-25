#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jit_debug_info_t.start.hpp"
namespace win
{
    // [struct _JIT_DEBUG_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jit_debug_info_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t dw_size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t dw_processor_architecture;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwProcessorArchitecture
        _m02 uint32_t dw_thread_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwThreadID
        _m03 uint32_t dw_reserved0;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReserved0
        _m04 uint64_t lp_exception_address;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpExceptionAddress
        _m05 uint64_t lp_exception_record;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpExceptionRecord
        _m06 uint64_t lp_context_record;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .lpContextRecord
                                                
        SDK_MAGIC_PROPERTIES( "_JIT_DEBUG_INFO.$", 0x28, true, 0x1a671448652f79c7 );                          
        SDK_FIXED_SIZE( jit_debug_info_t, 0x28 );                          
    };                                          
};
#include "magic/jit_debug_info_t.end.hpp"
SDK_VERIFY( struct win::jit_debug_info_t, 0x28 );
