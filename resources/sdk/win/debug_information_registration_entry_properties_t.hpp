#pragma once
#include <sdkgen/support_library.hpp>
#include "expandable_string_t.hpp"

#include "magic/debug_information_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct DebugInformationRegistrationEntryProperties]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_information_registration_entry_properties_t
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                              
        _m00 struct win::expandable_string_t debug_path;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DebugPath
                                                            
        SDK_MAGIC_PROPERTIES( "DebugInformationRegistrationEntryProperties.$", 0x20, true, 0x6d094d705604c095 );           
        SDK_FIXED_SIZE( debug_information_registration_entry_properties_t, 0x20 );           
    };                                                      
};
#include "magic/debug_information_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::debug_information_registration_entry_properties_t, 0x20 );
