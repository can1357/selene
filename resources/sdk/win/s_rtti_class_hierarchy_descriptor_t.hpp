#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_rtti_class_hierarchy_descriptor_t.start.hpp"
namespace win
{
    struct s_rtti_base_class_array_t;

    // [struct _s__RTTIClassHierarchyDescriptor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_rtti_class_hierarchy_descriptor_t                               
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                   
        _m00 uint32_t                                     signature;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .signature
        _m01 uint32_t                                     attributes;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .attributes
        _m02 uint32_t                                     num_base_classes;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .numBaseClasses
        _m03 const struct win::s_rtti_base_class_array_t* p_base_class_array;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pBaseClassArray
                                                                             
        SDK_MAGIC_PROPERTIES( "_s__RTTIClassHierarchyDescriptor.$", 0x14, true, 0x601bf32f700d1beb );                   
        SDK_FIXED_SIZE( s_rtti_class_hierarchy_descriptor_t, 0x14 );                   
    };                                                                       
};
#include "magic/s_rtti_class_hierarchy_descriptor_t.end.hpp"
SDK_VERIFY( struct win::s_rtti_class_hierarchy_descriptor_t, 0x14 );
