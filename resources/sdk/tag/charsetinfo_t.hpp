#pragma once
#include <sdkgen/support_library.hpp>
#include "fontsignature_t.hpp"

#include "magic/charsetinfo_t.start.hpp"
namespace tag
{
    // [struct tagCHARSETINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct charsetinfo_t                            
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                          
        _m00 uint32_t                    ci_charset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ciCharset
        _m01 uint32_t                    ci_acp;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ciACP
        _m02 struct tag::fontsignature_t fs;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .fs
                                                    
        SDK_NONVOL_PROPERTIES( "tagCHARSETINFO.$", 0x20, true, 0xd6eb059466d52bd4 );           
        SDK_FIXED_SIZE( charsetinfo_t, 0x20 );           
    };                                              
};
#include "magic/charsetinfo_t.end.hpp"
SDK_VERIFY( struct tag::charsetinfo_t, 0x20 );
