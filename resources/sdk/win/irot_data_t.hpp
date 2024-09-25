#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IROTData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irot_data_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IROTData.$", 0x8, true, 0x9e5a1ec7529afc00 );
        SDK_FIXED_SIZE( irot_data_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::irot_data_t, 0x8 );
