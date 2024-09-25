#pragma once
#include <sdkgen/support_library.hpp>
#include "designvector_t.hpp"
#include "enumlogfontexa_t.hpp"

#include "magic/enumlogfontexdva_t.start.hpp"
namespace tag
{
    // [struct tagENUMLOGFONTEXDVA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enumlogfontexdva_t                                 
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct tag::enumlogfontexa_t elf_enum_logfont_ex;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elfEnumLogfontEx
        _m01 struct tag::designvector_t   elf_design_vector;    //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .elfDesignVector
                                                              
        SDK_NONVOL_PROPERTIES( "tagENUMLOGFONTEXDVA.$", 0x104, true, 0x86e53d37e3df2b5b );                    
        SDK_FIXED_SIZE( enumlogfontexdva_t, 0x104 );                    
    };                                                        
};
#include "magic/enumlogfontexdva_t.end.hpp"
SDK_VERIFY( struct tag::enumlogfontexdva_t, 0x104 );
