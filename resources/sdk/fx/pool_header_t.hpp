#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_header_t.start.hpp"
namespace fx
{
    struct driver_globals_t;

    // [struct FX_POOL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_header_t                                    
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 void*                        base;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m01 struct fx::driver_globals_t* fx_driver_globals;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FxDriverGlobals
        _m02 sdk::array<uint32_t, 1>      allocation_start;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationStart
                                                            
        SDK_MAGIC_PROPERTIES( "FX_POOL_HEADER.$", 0x20, true, 0xdc666bb29bd05682 );                  
        SDK_FIXED_SIZE( pool_header_t, 0x20 );                  
    };                                                      
};
#include "magic/pool_header_t.end.hpp"
SDK_VERIFY( struct fx::pool_header_t, 0x20 );
