#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct filetime_t; }

#include "magic/cafiletime_t.start.hpp"
namespace tag
{
    // [struct tagCAFILETIME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cafiletime_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 struct win::filetime_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                             
        SDK_MAGIC_PROPERTIES( "tagCAFILETIME.$", 0x10, true, 0x553a184a9564bb64 );        
        SDK_FIXED_SIZE( cafiletime_t, 0x10 );        
    };                                       
};
#include "magic/cafiletime_t.end.hpp"
SDK_VERIFY( struct tag::cafiletime_t, 0x10 );
