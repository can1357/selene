#pragma once
#include <sdkgen/support_library.hpp>
#include "pmd_t.hpp"

#include "magic/s_rtti_base_class_descriptor_t.start.hpp"
namespace win
{
    struct type_descriptor_t;
    struct s_rtti_class_hierarchy_descriptor_t;

    // [struct _s__RTTIBaseClassDescriptor]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_rtti_base_class_descriptor_t                       
    {                                                           
        using p_class_descriptor_t = const struct win::s_rtti_class_hierarchy_descriptor_t*;                    
                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                      
        _m00 struct win::type_descriptor_t* p_type_descriptor;    //{ +0x0000    +0x0000    +0x0000    } | .pTypeDescriptor
        _m01 uint32_t                       num_contained_bases;  //{ +0x0008    +0x0008    +0x0008    } | .numContainedBases
        _m02 struct win::pmd_t              where;                //{ +0x000c    +0x000c    +0x000c    } | .where
        _m03 uint32_t                       attributes;           //{ +0x0018    +0x0018    +0x0018    } | .attributes
        _m04 p_class_descriptor_t           p_class_descriptor;   //{ +0x001c    +0x001c    +0x001c    } | .pClassDescriptor
                                                                
        SDK_MAGIC_PROPERTIES( "_s__RTTIBaseClassDescriptor.$", 0x24, true, 0x957f502fc323c608 );                    
        SDK_FIXED_SIZE( s_rtti_base_class_descriptor_t, 0x24 );                    
    };                                                          
};
#include "magic/s_rtti_base_class_descriptor_t.end.hpp"
SDK_VERIFY( struct win::s_rtti_base_class_descriptor_t, 0x24 );
