#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmd_t.start.hpp"
namespace win
{
    // [struct _PMD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pmd_t           
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 int32_t mdisp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mdisp
        _m01 int32_t pdisp;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .pdisp
        _m02 int32_t vdisp;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .vdisp
                           
        SDK_MAGIC_PROPERTIES( "_PMD.$", 0xc, true, 0x17fa01e9a3e4102a );      
        SDK_FIXED_SIZE( pmd_t, 0xc );      
    };                     
};
#include "magic/pmd_t.end.hpp"
SDK_VERIFY( struct win::pmd_t, 0xc );
