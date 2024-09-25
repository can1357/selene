#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xi_unknown_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class XIUnknown]
    // => Windows 10 v1607
    //
    class xi_unknown_t                  
    {                                   
        // Windows 10 v1607             
        //                              
        _m00 struct win::i_unknown_t* p;  //{ +0x0000    } | ._p
                                        
        SDK_MAGIC_PROPERTIES( "XIUnknown.$", 0x0, false, 0xd0d57a02ceaeb697 );  
        SDK_FIXED_SIZE( xi_unknown_t, 0x8 );  
    };                                  
};
#include "magic/xi_unknown_t.end.hpp"
SDK_VERIFY( class win::xi_unknown_t, 0x8 );
