#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serializable_property_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class SerializableProperty]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class serializable_property_t                               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 struct win::i_serializable_parent_t* parent;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._parent
        _m01 int32_t                              un_serialized;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._unSerialized
        _m02 int32_t                              added;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._added
                                                                
        SDK_MAGIC_PROPERTIES( "SerializableProperty.$", 0x18, true, 0x167dafaca6eb97e3 );              
        SDK_FIXED_SIZE( serializable_property_t, 0x18 );              
    };                                                          
};
#include "magic/serializable_property_t.end.hpp"
SDK_VERIFY( class win::serializable_property_t, 0x18 );
