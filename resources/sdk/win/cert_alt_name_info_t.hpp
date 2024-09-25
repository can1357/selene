#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_alt_name_info_t.start.hpp"
namespace win
{
    struct cert_alt_name_entry_t;

    // [struct _CERT_ALT_NAME_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_alt_name_info_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                   
        _m00 uint32_t                           c_alt_entry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cAltEntry
        _m01 struct win::cert_alt_name_entry_t* rg_alt_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgAltEntry
                                                             
        SDK_MAGIC_PROPERTIES( "_CERT_ALT_NAME_INFO.$", 0x10, true, 0x86a6f9776b88c21e );             
        SDK_FIXED_SIZE( cert_alt_name_info_t, 0x10 );             
    };                                                       
};
#include "magic/cert_alt_name_info_t.end.hpp"
SDK_VERIFY( struct win::cert_alt_name_info_t, 0x10 );
