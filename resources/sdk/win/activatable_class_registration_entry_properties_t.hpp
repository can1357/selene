#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_property_store_t.hpp"

#include "magic/activatable_class_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ActivatableClassRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_registration_entry_properties_t      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 struct win::entry_property_store_t custom_attributes;  //{ +0x0048    +0x0040    +0x0040    +0x0040    } | .CustomAttributes
                                                                  
        SDK_MAGIC_PROPERTIES( "ActivatableClassRegistrationEntryProperties.$", 0x50, true, 0x799e3c0cd89fc6e8 );                  
        SDK_FIXED_SIZE( activatable_class_registration_entry_properties_t, 0x50 );                  
    };                                                            
};
#include "magic/activatable_class_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::activatable_class_registration_entry_properties_t, 0x50 );
