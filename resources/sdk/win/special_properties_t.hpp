#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/special_properties_data_t.hpp"

#include "magic/special_properties_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class SpecialProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class special_properties_t                                   
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 struct win::i_serializable_parent_t*  parent;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                               un_serialized;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                               added;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::special_properties_data_t data;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._data
                                                                 
        SDK_MAGIC_PROPERTIES( "SpecialProperties.$", 0x78, true, 0xf88cefbf352112c7 );              
        SDK_FIXED_SIZE( special_properties_t, 0x78 );              
    };                                                           
};
#include "magic/special_properties_t.end.hpp"
SDK_VERIFY( class win::special_properties_t, 0x78 );
