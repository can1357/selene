#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lastinputinfo_t.start.hpp"
namespace tag
{
    // [struct tagLASTINPUTINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lastinputinfo_t    
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t cb_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_time;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwTime
                              
        SDK_MAGIC_PROPERTIES( "tagLASTINPUTINFO.$", 0x8, true, 0xe56d6e85cc3894a );        
        SDK_FIXED_SIZE( lastinputinfo_t, 0x8 );        
    };                        
};
#include "magic/lastinputinfo_t.end.hpp"
SDK_VERIFY( struct tag::lastinputinfo_t, 0x8 );
