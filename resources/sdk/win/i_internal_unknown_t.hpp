#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternalUnknown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internal_unknown_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IInternalUnknown.$", 0x8, true, 0x45640207c29ba228 );
        SDK_FIXED_SIZE( i_internal_unknown_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_internal_unknown_t, 0x8 );
