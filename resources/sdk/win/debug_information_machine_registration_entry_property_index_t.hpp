#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DebugInformationMachineRegistrationEntryPropertyIndex]
    //  Windows 10 v1607
    //
    enum class debug_information_machine_registration_entry_property_index_t : uint32_t
    {                                                                                  
        debug_path =     0x0,                                                            // Windows 10 v1607
        environment =    0x1,                                                            // Windows 10 v1607
        num_properties = 0x2,                                                            // Windows 10 v1607
    };                                                                                 
};
