#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_malloc_t.start.hpp"
namespace win
{
    struct i_malloc_vtbl_t;

    // [struct CMalloc]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_malloc_t                                   
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                              
        _m00 const struct win::i_malloc_vtbl_t* lp_vtbl;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
                                                        
        SDK_MAGIC_PROPERTIES( "CMalloc.$", 0x8, true, 0x1a40dcc2cbe1ed6e );        
        SDK_FIXED_SIZE( c_malloc_t, 0x8 );              
    };                                                  
};
#include "magic/c_malloc_t.end.hpp"
SDK_VERIFY( struct win::c_malloc_t, 0x8 );
