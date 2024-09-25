#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IZoneIdentifier]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_zone_identifier_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IZoneIdentifier.$", 0x8, true, 0x738099610188b6a0 );
        SDK_FIXED_SIZE( i_zone_identifier_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_zone_identifier_t, 0x8 );
