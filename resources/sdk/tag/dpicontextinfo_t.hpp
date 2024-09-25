#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpicontextinfo_t.start.hpp"
namespace tag
{
    // [struct tagDPICONTEXTINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dpicontextinfo_t       
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t dpi_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dpiContext
        _m01 uint32_t f_dirty;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fDirty
                                  
        SDK_MAGIC_PROPERTIES( "tagDPICONTEXTINFO.$", 0x8, true, 0xe5db1c92d21c67e2 );            
        SDK_FIXED_SIZE( dpicontextinfo_t, 0x8 );            
    };                            
};
#include "magic/dpicontextinfo_t.end.hpp"
SDK_VERIFY( struct tag::dpicontextinfo_t, 0x8 );
