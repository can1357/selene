#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComTreatAsClassRegistrationEntryPropertyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_treat_as_class_registration_entry_property_flags_t : uint64_t
    {                                                                           
        none =              0x0,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        treat_as =          0x1,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x2,                                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_convert_to =   0x4,                                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_machine_scope = 0x8,                                                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                          
};
