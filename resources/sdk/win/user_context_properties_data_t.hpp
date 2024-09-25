#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_context_properties_data_t.start.hpp"
namespace win
{
    // [struct UserContextPropertiesData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_context_properties_data_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t user_context;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .userContext
                                         
        SDK_MAGIC_PROPERTIES( "UserContextPropertiesData.$", 0x8, true, 0x6ffea602f3aa60f7 );             
        SDK_FIXED_SIZE( user_context_properties_data_t, 0x8 );             
    };                                   
};
#include "magic/user_context_properties_data_t.end.hpp"
SDK_VERIFY( struct win::user_context_properties_data_t, 0x8 );
