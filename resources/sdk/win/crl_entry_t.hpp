#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/crl_entry_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CRL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_entry_t                                     
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 struct win::cryptoapi_blob_t  serial_number;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SerialNumber
        _m01 struct win::filetime_t        revocation_date;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RevocationDate
        _m02 uint32_t                      c_extension;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cExtension
        _m03 struct win::cert_extension_t* rg_extension;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgExtension
                                                           
        SDK_MAGIC_PROPERTIES( "_CRL_ENTRY.$", 0x28, true, 0xaa9fdf611706a039 );                
        SDK_FIXED_SIZE( crl_entry_t, 0x28 );                
    };                                                     
};
#include "magic/crl_entry_t.end.hpp"
SDK_VERIFY( struct win::crl_entry_t, 0x28 );
