#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMCharacterData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_character_data_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IXMLDOMCharacterData.$", 0x8, true, 0x6757e38458a4f6b5 );
        SDK_FIXED_SIZE( ixmldom_character_data_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::ixmldom_character_data_t, 0x8 );
