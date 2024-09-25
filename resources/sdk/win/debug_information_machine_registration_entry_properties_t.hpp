#pragma once
#include <sdkgen/support_library.hpp>
#include "expandable_string_t.hpp"

#include "magic/debug_information_machine_registration_entry_properties_t.start.hpp"
namespace win
{
    // [struct DebugInformationMachineRegistrationEntryProperties]
    // => Windows 10 v1607
    //
    struct debug_information_machine_registration_entry_properties_t
    {                                                               
        // Windows 10 v1607                             
        //                                              
        _m00 struct win::expandable_string_t debug_path;              //{ +0x0000    } | .DebugPath
                                                                    
        SDK_MAGIC_PROPERTIES( "DebugInformationMachineRegistrationEntryProperties.$", 0x0, false, 0x3818d5c8265c2ded );           
        SDK_FIXED_SIZE( debug_information_machine_registration_entry_properties_t, 0x20 );           
    };                                                              
};
#include "magic/debug_information_machine_registration_entry_properties_t.end.hpp"
SDK_VERIFY( struct win::debug_information_machine_registration_entry_properties_t, 0x20 );
