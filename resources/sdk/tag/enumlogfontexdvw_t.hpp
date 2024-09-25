#pragma once
#include <sdkgen/support_library.hpp>
#include "designvector_t.hpp"
#include "enumlogfontexw_t.hpp"

#include "magic/enumlogfontexdvw_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTEXDVW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfontexdvw_t                                 
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct tag::enumlogfontexw_t elf_enum_logfont_ex;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfEnumLogfontEx
        _m01 struct tag::designvector_t   elf_design_vector;    //{ +0x015c    +0x015c    +0x015c    +0x015c    +0x015c    } | .elfDesignVector
                                                              
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTEXDVW.$", 0x1a4, true, 0xd5847eee76d8fd42 );                    
        SDK_FIXED_SIZE( enumlogfontexdvw_t, 0x1a4 );                    
    };                                                        
};
#include "magic/enumlogfontexdvw_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfontexdvw_t, 0x1a4 );
