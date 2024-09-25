#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListDescriptionState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_description_state_t : int32_t
    {                                                  
        unspecified =                 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        present_needs_instantiation = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        instantiated_has_object =     0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reported_missing =            0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_present =                 0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
