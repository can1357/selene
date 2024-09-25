#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_negotiated_tls_extensions_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NegotiatedTlsExtensions]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_negotiated_tls_extensions_t
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t extensions_count;             //{ +0x0000    +0x0000    +0x0000    } | .ExtensionsCount
        _m01 wchar_t* extensions;                   //{ +0x0008    +0x0008    +0x0008    } | .Extensions
                                                  
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_NegotiatedTlsExtensions.$", 0x10, true, 0xa6cbebc4e97c8b76 );                 
        SDK_FIXED_SIZE( pkg_context_negotiated_tls_extensions_t, 0x10 );                 
    };                                            
};
#include "magic/pkg_context_negotiated_tls_extensions_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_negotiated_tls_extensions_t, 0x10 );
