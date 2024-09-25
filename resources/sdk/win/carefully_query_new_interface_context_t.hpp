#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/carefully_query_new_interface_context_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CarefullyQueryNewInterfaceContext]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class carefully_query_new_interface_context_t
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                       
        _m00 struct win::i_unknown_t const* punk;  //{ +0x0000    +0x0000    +0x0000    } | ._punk
                                                 
        SDK_MAGIC_PROPERTIES( "CarefullyQueryNewInterfaceContext.$", 0x10, true, 0x972482135eb74f68 );     
        SDK_FIXED_SIZE( carefully_query_new_interface_context_t, 0x10 );     
    };                                           
};
#include "magic/carefully_query_new_interface_context_t.end.hpp"
SDK_VERIFY( class win::carefully_query_new_interface_context_t, 0x10 );
