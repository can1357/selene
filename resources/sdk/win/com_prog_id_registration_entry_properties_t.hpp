#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ComProgIdRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_prog_id_registration_entry_properties_t
    {                                                 
                                                      
        SDK_MAGIC_PROPERTIES( "ComProgIdRegistrationEntryProperties.$", 0x30, true, 0x121244cb1b27a951 );
        SDK_DYNAMIC_SIZE( com_prog_id_registration_entry_properties_t );
    };                                                
};
