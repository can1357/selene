#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorLocalRefPreservation]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_local_ref_preservation_t : int32_t
    {                                                
        refs_none =  0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ref =   0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        member_ref = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
