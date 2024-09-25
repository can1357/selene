#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLHttpRequest]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixml_http_request_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IXMLHttpRequest.$", 0x8, true, 0xbad396bfa4d29faa );
        SDK_FIXED_SIZE( ixml_http_request_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::ixml_http_request_t, 0x8 );
