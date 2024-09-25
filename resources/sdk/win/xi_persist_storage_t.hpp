#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xi_persist_storage_t.start.hpp"
namespace win
{
    struct i_persist_storage_t;

    // [class XIPersistStorage]
    // => Windows 10 v1607
    //
    class xi_persist_storage_t                  
    {                                           
        // Windows 10 v1607                     
        //                                      
        _m00 struct win::i_persist_storage_t* p;  //{ +0x0000    } | ._p
                                                
        SDK_MAGIC_PROPERTIES( "XIPersistStorage.$", 0x0, false, 0x52119d216a0ec0a8 );  
        SDK_FIXED_SIZE( xi_persist_storage_t, 0x8 );  
    };                                          
};
#include "magic/xi_persist_storage_t.end.hpp"
SDK_VERIFY( class win::xi_persist_storage_t, 0x8 );
