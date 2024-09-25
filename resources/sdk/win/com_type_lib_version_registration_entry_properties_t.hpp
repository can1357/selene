#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_type_lib_version_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct ComTypeLibVersionRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_type_lib_version_registration_entry_properties_t
    {                                                          
        // Windows 10 v1607          
        //                      
        _m00 uint32_t locale_id;                                 //{ +0x0000    } | .LocaleId
        _m01 uint32_t flags;                                     //{ +0x0004    } | .Flags
                                                               
        SDK_MAGIC_PROPERTIES( "ComTypeLibVersionRegistrationEntryProperties.$", 0x58, true, 0x97bd1a6b75b6d7be );          
        SDK_DYNAMIC_SIZE( com_type_lib_version_registration_entry_properties_t );          
    };                                                         
};
#include "magic/com_type_lib_version_registration_entry_properties_t.end.hpp"
