#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComTreatAsClassRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_treat_as_class_registration_entry_property_index_t : uint32_t
    {                                                                           
        treat_as =          0x0,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x1,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_convert_to =   0x2,                                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //num_properties =  0x2,                                                  // Windows 10 v1607
        has_machine_scope = 0x3,                                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =    0x4,                                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                          
};
