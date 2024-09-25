#pragma once
#include <sdkgen/support_library.hpp>
#include "multi_string_t.hpp"
#include "../sec/descriptor_t.hpp"
#include "expandable_string_t.hpp"
#include "entry_property_store_t.hpp"

#include "magic/server_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ServerRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_registration_entry_properties_t                   
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                          
        _m00 class sec::descriptor_t            permissions;          //{ +0x0040    +0x0060    +0x0060    +0x0060    } | .Permissions
        _m01 class win::multi_string_t          activatable_classes;  //{ +0x0050    +0x0070    +0x0070    +0x0070    } | .ActivatableClasses
        _m02 struct win::entry_property_store_t custom_attributes;    //{ +0x0058    +0x00a8    +0x00a8    +0x00a8    } | .CustomAttributes
                                                                    
        // Windows 10 v1607                                         
        //                                                          
        _m03 struct win::expandable_string_t    exe_path;             //{ +0x0000    } | .ExePath
                                                                    
        SDK_MAGIC_PROPERTIES( "ServerRegistrationEntryProperties.$", 0xb0, true, 0xeee2abd62a649bde );                    
        SDK_DYNAMIC_SIZE( server_registration_entry_properties_t );                    
    };                                                              
};
#include "magic/server_registration_entry_properties_t.end.hpp"
