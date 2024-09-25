#pragma once
#include <sdkgen/support_library.hpp>
#include "ncrypt_exported_isolated_key_header_t.hpp"

#include "magic/ncrypt_exported_isolated_key_envelope_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_exported_isolated_key_envelope_t         
    {                                                      
        using ncrypt_exported_isolated_key_header_t = struct win::ncrypt_exported_isolated_key_header_t;       
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 ncrypt_exported_isolated_key_header_t  header;  //{ +0x0000    +0x0000    +0x0000    } | .Header
                                                           
        SDK_MAGIC_PROPERTIES( "_NCRYPT_EXPORTED_ISOLATED_KEY_ENVELOPE.$", 0x20, true, 0x3022ff5af391e2d5 );       
        SDK_FIXED_SIZE( ncrypt_exported_isolated_key_envelope_t, 0x20 );       
    };                                                     
};
#include "magic/ncrypt_exported_isolated_key_envelope_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_exported_isolated_key_envelope_t, 0x20 );
