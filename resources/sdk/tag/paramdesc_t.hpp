#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/paramdesc_t.start.hpp"
namespace tag
{
    struct paramdescex_t;

    // [struct tagPARAMDESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paramdesc_t                                
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 struct tag::paramdescex_t* pparamdescex;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pparamdescex
        _m01 uint16_t                   w_param_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wParamFlags
                                                      
        SDK_MAGIC_PROPERTIES( "tagPARAMDESC.$", 0x10, true, 0xfbbf8ecbbd099854 );              
        SDK_FIXED_SIZE( paramdesc_t, 0x10 );              
    };                                                
};
#include "magic/paramdesc_t.end.hpp"
SDK_VERIFY( struct tag::paramdesc_t, 0x10 );
