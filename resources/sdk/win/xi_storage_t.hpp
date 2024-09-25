#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xi_storage_t.start.hpp"
namespace win
{
    struct i_storage_t;

    // [class XIStorage]
    // => Windows 10 v1607
    //
    class xi_storage_t                  
    {                                   
        // Windows 10 v1607             
        //                              
        _m00 struct win::i_storage_t* p;  //{ +0x0000    } | ._p
                                        
        SDK_MAGIC_PROPERTIES( "XIStorage.$", 0x0, false, 0x7531a26b925bf22 );  
        SDK_FIXED_SIZE( xi_storage_t, 0x8 );  
    };                                  
};
#include "magic/xi_storage_t.end.hpp"
SDK_VERIFY( class win::xi_storage_t, 0x8 );
