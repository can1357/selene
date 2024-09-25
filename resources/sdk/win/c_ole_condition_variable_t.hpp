#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/condition_variable_t.hpp"

#include "magic/c_ole_condition_variable_t.start.hpp"
namespace win
{
    // [class COleConditionVariable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ole_condition_variable_t             
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                                       
        _m00 struct rtl::condition_variable_t cv;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cv
                                                 
        SDK_MAGIC_PROPERTIES( "COleConditionVariable.$", 0x8, true, 0x909164342266a8b4 );   
        SDK_FIXED_SIZE( c_ole_condition_variable_t, 0x8 );   
    };                                           
};
#include "magic/c_ole_condition_variable_t.end.hpp"
SDK_VERIFY( class win::c_ole_condition_variable_t, 0x8 );
