#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cal_t.start.hpp"
namespace tag
{
    // [struct tagCAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cal_t              
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 int32_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                              
        SDK_MAGIC_PROPERTIES( "tagCAL.$", 0x10, true, 0x11f4c43d67ebe7a5 );        
        SDK_FIXED_SIZE( cal_t, 0x10 );        
    };                        
};
#include "magic/cal_t.end.hpp"
SDK_VERIFY( struct tag::cal_t, 0x10 );
