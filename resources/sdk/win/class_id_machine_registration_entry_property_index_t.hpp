#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ClassIdMachineRegistrationEntryPropertyIndex]
    //  Windows 10 v1607
    //
    enum class class_id_machine_registration_entry_property_index_t : uint32_t
    {                                                                         
        activatable_class_id = 0x0,                                             // Windows 10 v1607
        num_properties =       0x1,                                             // Windows 10 v1607
    };                                                                        
};
