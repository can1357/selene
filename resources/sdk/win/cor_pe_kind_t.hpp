#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorPEKind]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_pe_kind_t : int32_t
    {                                 
        pe_not =             0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe_i_lonly =         0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_bit_required =  0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_plus =          0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_unmanaged =     0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pe32_bit_preferred = 0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
