#pragma once
#include <sdkgen/support_library.hpp>
#include "resource_translation_direction_t.hpp"

namespace cm { struct partial_resource_descriptor_t; }
namespace io { struct resource_descriptor_t;         }
namespace nt { struct device_object_t;               }

#include "magic/translator_interface_t.start.hpp"
namespace wdf
{
    // [struct _TRANSLATOR_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct translator_interface_t                                                        
    {                                                                                    
        using ptranslate_resource_handler_t =              sdk::function<int32_t(void*, struct cm::partial_resource_descriptor_t*, enum wdf::resource_translation_direction_t, uint32_t, struct io::resource_descriptor_t*, struct nt::device_object_t*, struct cm::partial_resource_descriptor_t*)>*;                                
        using ptranslate_resource_requirements_handler_t = sdk::function<int32_t(void*, struct io::resource_descriptor_t*, struct nt::device_object_t*, uint32_t*, struct io::resource_descriptor_t**)>*;                                
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m00 uint16_t                                    size;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                    version;                          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                       context;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*                 interface_reference;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*                 interface_dereference;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ptranslate_resource_handler_t               translate_resources;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TranslateResources
        _m06 ptranslate_resource_requirements_handler_t  translate_resource_requirements;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TranslateResourceRequirements
                                                                                         
        SDK_NONVOL_PROPERTIES( "_TRANSLATOR_INTERFACE.$", 0x30, true, 0x18747dc2fabbe80b );                                
        SDK_FIXED_SIZE( translator_interface_t, 0x30 );                                  
    };                                                                                   
};
#include "magic/translator_interface_t.end.hpp"
SDK_VERIFY( struct wdf::translator_interface_t, 0x30 );
