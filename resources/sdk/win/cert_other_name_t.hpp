#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_other_name_t.start.hpp"
namespace win
{
    // [struct _CERT_OTHER_NAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_other_name_t                         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t value;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_OTHER_NAME.$", 0x18, true, 0x160ffa450884367b );           
        SDK_FIXED_SIZE( cert_other_name_t, 0x18 );           
    };                                               
};
#include "magic/cert_other_name_t.end.hpp"
SDK_VERIFY( struct win::cert_other_name_t, 0x18 );
