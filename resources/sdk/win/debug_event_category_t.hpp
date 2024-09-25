#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DebugEventCategory]
    //  Windows 10 v1607
    //
    enum class debug_event_category_t : int32_t                
    {                                                          
        call_object =                                   0x0,     // Windows 10 v1607
        disconnectable_context_object =                 0x1,     // Windows 10 v1607
        classic_com_class_registration_and_revocation = 0x2,     // Windows 10 v1607
    };                                                         
};
