#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAllowAstaToAstaDeadlockRisk]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_allow_asta_to_asta_deadlock_risk_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "IAllowAstaToAstaDeadlockRisk.$", 0x8, true, 0xcda46330d91db6a4 );
        SDK_FIXED_SIZE( i_allow_asta_to_asta_deadlock_risk_t, 0x8 );
    };                                         
};
SDK_VERIFY( struct win::i_allow_asta_to_asta_deadlock_risk_t, 0x8 );
