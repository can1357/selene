#pragma once
#include <sdkgen/support_library.hpp>
#include "extension_activation_context_properties_data_t.hpp"

#include "magic/extension_activation_context_properties_t.start.hpp"
namespace win
{
    struct i_serializable_parent_t;

    // [class ExtensionActivationContextProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class extension_activation_context_properties_t                                                       
    {                                                                                                     
        using extension_activation_context_properties_data_t = struct win::extension_activation_context_properties_data_t;                                             
                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                                
        _m00 struct win::i_serializable_parent_t*            parent;                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                                         un_serialized;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                                         added;                                         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 extension_activation_context_properties_data_t  extension_activation_context_properties_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._extensionActivationContextPropertiesData
                                                                                                          
        SDK_MAGIC_PROPERTIES( "ExtensionActivationContextProperties.$", 0x68, true, 0x234c29c6cf3d12f );                                             
        SDK_DYNAMIC_SIZE( extension_activation_context_properties_t );                                             
    };                                                                                                    
};
#include "magic/extension_activation_context_properties_t.end.hpp"
