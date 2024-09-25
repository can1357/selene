#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_rdn_attr_t.start.hpp"
namespace win
{
    // [struct _CERT_RDN_ATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_rdn_attr_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 char*                        psz_obj_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 uint32_t                     dw_value_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwValueType
        _m02 struct win::cryptoapi_blob_t value;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_RDN_ATTR.$", 0x20, true, 0x1a61500ba5798f2 );              
        SDK_FIXED_SIZE( cert_rdn_attr_t, 0x20 );              
    };                                                  
};
#include "magic/cert_rdn_attr_t.end.hpp"
SDK_VERIFY( struct win::cert_rdn_attr_t, 0x20 );
