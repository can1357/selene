#pragma once
#include <sdkgen/support_library.hpp>
#include "variant_t.hpp"

#include "magic/paramdescex_t.start.hpp"
namespace tag
{
    // [struct tagPARAMDESCEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paramdescex_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                           
        _m00 uint32_t              c_bytes;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cBytes
        _m01 struct tag::variant_t var_default_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .varDefaultValue
                                                     
        SDK_MAGIC_PROPERTIES( "tagPARAMDESCEX.$", 0x20, true, 0x17cc8b0d81521ddc );                  
        SDK_FIXED_SIZE( paramdescex_t, 0x20 );                  
    };                                               
};
#include "magic/paramdescex_t.end.hpp"
SDK_VERIFY( struct tag::paramdescex_t, 0x20 );
