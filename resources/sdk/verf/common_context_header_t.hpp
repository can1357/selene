#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct driver_globals_t; }

#include "magic/common_context_header_t.start.hpp"
namespace verf
{
    // [struct _VF_COMMON_CONTEXT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct common_context_header_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                
        _m00 struct wdf::driver_globals_t* driver_globals;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverGlobals
                                                          
        SDK_MAGIC_PROPERTIES( "_VF_COMMON_CONTEXT_HEADER.$", 0x8, true, 0xad840162a9d740cb );               
        SDK_FIXED_SIZE( common_context_header_t, 0x8 );               
    };                                                    
};
#include "magic/common_context_header_t.end.hpp"
SDK_VERIFY( struct verf::common_context_header_t, 0x8 );
