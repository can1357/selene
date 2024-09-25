#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOMCALLTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class comcalltype_t : int32_t
    {                                 
        outgoing_call = 0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incoming_call = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation =    0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
