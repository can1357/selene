#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILegacyInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_legacy_info_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "ILegacyInfo.$", 0x8, true, 0x15af41737c44623 );
        SDK_FIXED_SIZE( i_legacy_info_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_legacy_info_t, 0x8 );
