#pragma once
#include <sdkgen/support_library.hpp>
#include "user_context_properties_data_t.hpp"

#include "magic/user_context_properties_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class UserContextProperties]
    // => Windows 10 v1607
    //
    class user_context_properties_t                                                  
    {                                                                                
        // Windows 10 v1607                                                          
        //                                                                           
        _m00 struct win::i_serializable_parent_t*       parent;                        //{ +0x0010    } | ._parent
        _m01 int32_t                                    un_serialized;                 //{ +0x0018    } | ._unSerialized
        _m02 int32_t                                    added;                         //{ +0x001c    } | ._added
        _m03 struct win::user_context_properties_data_t user_context_properties_data;  //{ +0x0020    } | ._userContextPropertiesData
                                                                                     
        SDK_MAGIC_PROPERTIES( "UserContextProperties.$", 0x0, false, 0x13d0b6a26e6d2acd );                             
        SDK_FIXED_SIZE( user_context_properties_t, 0x28 );                             
    };                                                                               
};
#include "magic/user_context_properties_t.end.hpp"
SDK_VERIFY( class win::user_context_properties_t, 0x28 );
