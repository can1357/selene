#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRemUnknownN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rem_unknown_n_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IRemUnknownN.$", 0x8, true, 0xabe03fc87451fd62 );
        SDK_FIXED_SIZE( i_rem_unknown_n_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_rem_unknown_n_t, 0x8 );
