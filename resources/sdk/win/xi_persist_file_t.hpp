#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xi_persist_file_t.start.hpp"
namespace win
{
    struct i_persist_file_t;

    // [class XIPersistFile]
    // => Windows 10 v1607
    //
    class xi_persist_file_t                  
    {                                        
        // Windows 10 v1607                  
        //                                   
        _m00 struct win::i_persist_file_t* p;  //{ +0x0000    } | ._p
                                             
        SDK_MAGIC_PROPERTIES( "XIPersistFile.$", 0x0, false, 0x9e23fc60f4a22079 );  
        SDK_FIXED_SIZE( xi_persist_file_t, 0x8 );  
    };                                       
};
#include "magic/xi_persist_file_t.end.hpp"
SDK_VERIFY( class win::xi_persist_file_t, 0x8 );
