#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxListTransactionAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class list_transaction_action_t : int32_t
    {                                             
        nothing = 0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add =     0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove =  0x3,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
