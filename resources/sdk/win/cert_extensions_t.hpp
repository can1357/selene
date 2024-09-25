#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_extensions_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CERT_EXTENSIONS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_extensions_t                            
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                              
        _m00 uint32_t                      c_extension;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cExtension
        _m01 struct win::cert_extension_t* rg_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgExtension
                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_EXTENSIONS.$", 0x10, true, 0x18164d435de9f218 );             
        SDK_FIXED_SIZE( cert_extensions_t, 0x10 );             
    };                                                  
};
#include "magic/cert_extensions_t.end.hpp"
SDK_VERIFY( struct win::cert_extensions_t, 0x10 );
