#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_safearr_variant_t.start.hpp"
namespace win
{
    struct wire_variant_t;

    // [struct _wireSAFEARR_VARIANT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_safearr_variant_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 uint32_t                     size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 struct win::wire_variant_t** a_variant;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aVariant
                                                    
        SDK_MAGIC_PROPERTIES( "_wireSAFEARR_VARIANT.$", 0x10, true, 0x49bed369e1638aec );          
        SDK_FIXED_SIZE( wire_safearr_variant_t, 0x10 );          
    };                                              
};
#include "magic/wire_safearr_variant_t.end.hpp"
SDK_VERIFY( struct win::wire_safearr_variant_t, 0x10 );
