#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_property_store_t.hpp"

#include "magic/activatable_class_machine_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ActivatableClassMachineRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_machine_registration_entry_properties_t
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 struct win::entry_property_store_t custom_attributes;    //{ +0x0050    +0x0040    +0x0040    +0x0040    } | .CustomAttributes
                                                                    
        SDK_MAGIC_PROPERTIES( "ActivatableClassMachineRegistrationEntryProperties.$", 0x88, true, 0xae4419a198ac1179 );                  
        SDK_DYNAMIC_SIZE( activatable_class_machine_registration_entry_properties_t );                  
    };                                                              
};
#include "magic/activatable_class_machine_registration_entry_properties_t.end.hpp"
