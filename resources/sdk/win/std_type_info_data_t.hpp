#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/std_type_info_data_t.start.hpp"
namespace win
{
    // [struct __std_type_info_data]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_type_info_data_t                         
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                              
        _m00 const char*               undecorated_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._UndecoratedName
        _m01 sdk::array<const char, 1> decorated_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._DecoratedName
                                                        
        SDK_MAGIC_PROPERTIES( "__std_type_info_data.$", 0x10, true, 0xe050f3bf5542df2f );                 
        SDK_FIXED_SIZE( std_type_info_data_t, 0x10 );                 
    };                                                  
};
#include "magic/std_type_info_data_t.end.hpp"
SDK_VERIFY( struct win::std_type_info_data_t, 0x10 );
