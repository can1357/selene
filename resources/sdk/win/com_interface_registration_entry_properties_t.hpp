#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_interface_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComInterfaceRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_interface_registration_entry_properties_t
    {                                                   
        // Windows 10 v1607                        
        //                                
        _m00 bool use_universal_marshaler;                //{ +0x0000    } | .UseUniversalMarshaler
                                                        
        SDK_MAGIC_PROPERTIES( "ComInterfaceRegistrationEntryProperties.$", 0x70, true, 0x527aec736249d303 );                        
        SDK_DYNAMIC_SIZE( com_interface_registration_entry_properties_t );                        
    };                                                  
};
#include "magic/com_interface_registration_entry_properties_t.end.hpp"
