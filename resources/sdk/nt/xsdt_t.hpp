#pragma once
#include <sdkgen/support_library.hpp>
#include "description_header_t.hpp"

#include "magic/xsdt_t.start.hpp"
namespace nt
{
    // [struct _XSDT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct xsdt_t                                      
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                             
        _m00 struct nt::description_header_t    header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<__unaligned int64_t, 1> tables;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Tables
                                                       
        SDK_MAGIC_PROPERTIES( "_XSDT.$", 0x2c, true, 0xbf989bd4c4af1053 );       
        SDK_FIXED_SIZE( xsdt_t, 0x2c );                
    };                                                 
};
#include "magic/xsdt_t.end.hpp"
SDK_VERIFY( struct nt::xsdt_t, 0x2c );
