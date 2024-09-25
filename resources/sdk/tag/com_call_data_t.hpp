#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_call_data_t.start.hpp"
namespace tag
{
    // [struct tagComCallData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_call_data_t           
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t dw_dispid;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDispid
        _m01 uint32_t dw_reserved;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwReserved
        _m02 void*    p_user_defined;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pUserDefined
                                     
        SDK_MAGIC_PROPERTIES( "tagComCallData.$", 0x10, true, 0xcfa253db42202b27 );               
        SDK_FIXED_SIZE( com_call_data_t, 0x10 );               
    };                               
};
#include "magic/com_call_data_t.end.hpp"
SDK_VERIFY( struct tag::com_call_data_t, 0x10 );
