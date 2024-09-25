#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_extension_t.start.hpp"
namespace win
{
    // [struct _CERT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_extension_t                          
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 int32_t                      f_critical;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fCritical
        _m02 struct win::cryptoapi_blob_t value;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_EXTENSION.$", 0x20, true, 0x6c1c272f97843814 );           
        SDK_FIXED_SIZE( cert_extension_t, 0x20 );           
    };                                               
};
#include "magic/cert_extension_t.end.hpp"
SDK_VERIFY( struct win::cert_extension_t, 0x20 );
