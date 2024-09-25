#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/learning_mode_user_object_data_t.start.hpp"
namespace se
{
    // [struct _SE_LEARNING_MODE_USER_OBJECT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct learning_mode_user_object_data_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 uint32_t          cookie;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cookie
        _m01 nt::unicode_view* object_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectType
        _m02 nt::unicode_view* object_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectName
                                           
        SDK_MAGIC_PROPERTIES( "_SE_LEARNING_MODE_USER_OBJECT_DATA.$", 0x18, true, 0xae3bf8902468a3bf );            
        SDK_FIXED_SIZE( learning_mode_user_object_data_t, 0x18 );            
    };                                     
};
#include "magic/learning_mode_user_object_data_t.end.hpp"
SDK_VERIFY( struct se::learning_mode_user_object_data_t, 0x18 );
