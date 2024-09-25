#pragma once
#include <sdkgen/support_library.hpp>
#include "std_type_info_data_t.hpp"

#include "magic/type_info_t.start.hpp"
namespace win
{
    // [class type_info]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class type_info_t                              
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                         
        _m00 struct win::std_type_info_data_t data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._Data
                                                   
        SDK_MAGIC_PROPERTIES( "type_info.$", 0x18, true, 0x92da854a484ecd0f );     
        SDK_FIXED_SIZE( type_info_t, 0x18 );       
    };                                             
};
#include "magic/type_info_t.end.hpp"
SDK_VERIFY( class win::type_info_t, 0x18 );
