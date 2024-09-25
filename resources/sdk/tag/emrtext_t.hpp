#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrtext_t.start.hpp"
namespace tag
{
    // [struct tagEMRTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrtext_t                            
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 struct win::pointl_t ptl_reference;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ptlReference
        _m01 uint32_t             n_chars;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .nChars
        _m02 uint32_t             off_string;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .offString
        _m03 uint32_t             f_options;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .fOptions
        _m04 struct win::rectl_t  rcl;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .rcl
        _m05 uint32_t             off_dx;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .offDx
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRTEXT.$", 0x28, true, 0xfad07b0eab636811 );              
        SDK_FIXED_SIZE( emrtext_t, 0x28 );              
    };                                          
};
#include "magic/emrtext_t.end.hpp"
SDK_VERIFY( struct tag::emrtext_t, 0x28 );
