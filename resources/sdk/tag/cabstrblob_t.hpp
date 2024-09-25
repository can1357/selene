#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cabstrblob_t.start.hpp"
namespace tag
{
    struct bstrblob_t;

    // [struct tagCABSTRBLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cabstrblob_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                c_elems;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cElems
        _m01 struct tag::bstrblob_t* p_elems;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pElems
                                             
        SDK_MAGIC_PROPERTIES( "tagCABSTRBLOB.$", 0x10, true, 0x366c53a4d53013a5 );        
        SDK_FIXED_SIZE( cabstrblob_t, 0x10 );        
    };                                       
};
#include "magic/cabstrblob_t.end.hpp"
SDK_VERIFY( struct tag::cabstrblob_t, 0x10 );
