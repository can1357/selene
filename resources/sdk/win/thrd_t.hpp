#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thrd_t.start.hpp"
namespace win
{
    // [struct _Thrd_t]
    // => Windows 11
    //
    struct thrd_t         
    {                     
        // Windows 11     
        //                
        _m00 void*    hnd;  //{ +0x0000    } | ._Hnd
        _m01 uint32_t id;   //{ +0x0008    } | ._Id
                          
        SDK_MAGIC_PROPERTIES( "_Thrd_t.$", 0x0, false, 0xdd0511a1de038c4c );    
        SDK_FIXED_SIZE( thrd_t, 0x10 );    
    };                    
};
#include "magic/thrd_t.end.hpp"
SDK_VERIFY( struct win::thrd_t, 0x10 );
