#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/caclipdata_t.start.hpp"
namespace tag
{
    struct clipdata_t;

    // [struct tagCACLIPDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct caclipdata_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 struct tag::clipdata_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                             
        SDK_MAGIC_PROPERTIES( "tagCACLIPDATA.$", 0x10, true, 0xa260bd75957ba744 );        
        SDK_FIXED_SIZE( caclipdata_t, 0x10 );        
    };                                       
};
#include "magic/caclipdata_t.end.hpp"
SDK_VERIFY( struct tag::caclipdata_t, 0x10 );
