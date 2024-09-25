#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/class_id_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ClassIdRegistrationEntryProperties]
    // => Windows 10 v1607
    //
    struct class_id_registration_entry_properties_t          
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 class win::opaque_string_t activatable_class_id;  //{ +0x0000    } | .ActivatableClassId
        _m01 class win::opaque_string_t package_moniker;       //{ +0x0008    } | .PackageMoniker
                                                             
        SDK_MAGIC_PROPERTIES( "ClassIdRegistrationEntryProperties.$", 0x0, false, 0x24e01f1704b36678 );                     
        SDK_FIXED_SIZE( class_id_registration_entry_properties_t, 0x10 );                     
    };                                                       
};
#include "magic/class_id_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::class_id_registration_entry_properties_t, 0x10 );
