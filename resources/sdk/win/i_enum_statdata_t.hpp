#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IEnumSTATDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_enum_statdata_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IEnumSTATDATA.$", 0x8, true, 0xa711b14ab5587fe3 );
        SDK_FIXED_SIZE( i_enum_statdata_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_enum_statdata_t, 0x8 );
