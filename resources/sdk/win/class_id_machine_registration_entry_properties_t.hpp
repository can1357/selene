#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/class_id_machine_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ClassIdMachineRegistrationEntryProperties]
    // => Windows 10 v1607
    //
    struct class_id_machine_registration_entry_properties_t  
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 class win::opaque_string_t activatable_class_id;  //{ +0x0000    } | .ActivatableClassId
                                                             
        SDK_MAGIC_PROPERTIES( "ClassIdMachineRegistrationEntryProperties.$", 0x0, false, 0xdae29390390333ca );                     
        SDK_FIXED_SIZE( class_id_machine_registration_entry_properties_t, 0x8 );                     
    };                                                       
};
#include "magic/class_id_machine_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::class_id_machine_registration_entry_properties_t, 0x8 );
