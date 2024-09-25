#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_rtti_base_class_array_t.start.hpp"
namespace win
{
    struct s_rtti_base_class_descriptor_t;
    struct s_rtti_base_class_descriptor2_t;

    // [struct _s__RTTIBaseClassArray]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_rtti_base_class_array_t                                            
    {                                                                           
        using array_of_base_class_descriptors_t = sdk::variant<sdk::array<const struct win::s_rtti_base_class_descriptor2_t*>, sdk::array<const struct win::s_rtti_base_class_descriptor_t*>>;                                
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                      
        _m00 array_of_base_class_descriptors_t  array_of_base_class_descriptors;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .arrayOfBaseClassDescriptors
                                                                                
        SDK_MAGIC_PROPERTIES( "_s__RTTIBaseClassArray.$", 0x4, true, 0xe5a76319e527de2c );                                
        SDK_FIXED_SIZE( s_rtti_base_class_array_t, 0x4 );                                
    };                                                                          
};
#include "magic/s_rtti_base_class_array_t.end.hpp"
SDK_VERIFY( struct win::s_rtti_base_class_array_t, 0x4 );
