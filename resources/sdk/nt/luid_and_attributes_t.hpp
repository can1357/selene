#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"

#include "magic/luid_and_attributes_t.start.hpp"
namespace nt
{
    // [struct _LUID_AND_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct luid_and_attributes_t          
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct nt::luid_t luid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Luid
        _m01 uint32_t          attributes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
                                          
        SDK_NONVOL_PROPERTIES( "_LUID_AND_ATTRIBUTES.$", 0xc, true, 0x130b2cbf196abc2c );           
        SDK_FIXED_SIZE( luid_and_attributes_t, 0xc );           
    };                                    
};
#include "magic/luid_and_attributes_t.end.hpp"
SDK_VERIFY( struct nt::luid_and_attributes_t, 0xc );
