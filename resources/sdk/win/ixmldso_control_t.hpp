#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDSOControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldso_control_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IXMLDSOControl.$", 0x8, true, 0xc0a7b3420c601293 );
        SDK_FIXED_SIZE( ixmldso_control_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::ixmldso_control_t, 0x8 );
