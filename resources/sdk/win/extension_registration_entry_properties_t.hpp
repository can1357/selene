#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"
#include "entry_property_store_t.hpp"

#include "magic/extension_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ExtensionRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extension_registration_entry_properties_t              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 class win::opaque_string_t         vendor;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Vendor
        _m01 class win::opaque_string_t         icon;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Icon
        _m02 class win::opaque_string_t         display_name;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DisplayName
        _m03 class win::opaque_string_t         description;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Description
        _m04 struct win::entry_property_store_t custom_properties;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CustomProperties
                                                                  
        SDK_MAGIC_PROPERTIES( "ExtensionRegistrationEntryProperties.$", 0x28, true, 0x35f8bad4cdebe778 );                  
        SDK_FIXED_SIZE( extension_registration_entry_properties_t, 0x28 );                  
    };                                                            
};
#include "magic/extension_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::extension_registration_entry_properties_t, 0x28 );
