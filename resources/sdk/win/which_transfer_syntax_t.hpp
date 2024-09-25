#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WhichTransferSyntax]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class which_transfer_syntax_t : int32_t
    {                                           
        ndr20 = 0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndr64 = 0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
