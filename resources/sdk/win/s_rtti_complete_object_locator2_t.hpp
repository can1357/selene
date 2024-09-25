#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_rtti_complete_object_locator2_t.start.hpp"
namespace win
{
    struct type_descriptor_t;
    struct s_rtti_complete_object_locator2_t;
    struct s_rtti_class_hierarchy_descriptor_t;

    // [struct _s__RTTICompleteObjectLocator2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_rtti_complete_object_locator2_t                   
    {                                                          
        using p_class_descriptor_t = const struct win::s_rtti_class_hierarchy_descriptor_t*;                   
        using p_self_t =             const struct win::s_rtti_complete_object_locator2_t*;                   
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint32_t                       signature;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .signature
        _m01 uint32_t                       offset;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .offset
        _m02 uint32_t                       cd_offset;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cdOffset
        _m03 struct win::type_descriptor_t* p_type_descriptor;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pTypeDescriptor
        _m04 p_class_descriptor_t           p_class_descriptor;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .pClassDescriptor
        _m05 p_self_t                       p_self;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .pSelf
                                                               
        SDK_MAGIC_PROPERTIES( "_s__RTTICompleteObjectLocator2.$", 0x24, true, 0x249316ce3680f848 );                   
        SDK_FIXED_SIZE( s_rtti_complete_object_locator2_t, 0x24 );                   
    };                                                         
};
#include "magic/s_rtti_complete_object_locator2_t.end.hpp"
SDK_VERIFY( struct win::s_rtti_complete_object_locator2_t, 0x24 );
