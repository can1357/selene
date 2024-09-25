#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLError]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_error_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IXMLError.$", 0x8, true, 0xc71c9f964dba349d );
        SDK_FIXED_SIZE( ixml_error_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::ixml_error_t, 0x8 );
