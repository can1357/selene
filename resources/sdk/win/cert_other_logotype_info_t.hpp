#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_logotype_info_t.hpp"

#include "magic/cert_other_logotype_info_t.start.hpp"
namespace win
{
    // [struct _CERT_OTHER_LOGOTYPE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_other_logotype_info_t                       
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                  
        _m00 char*                            psz_obj_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cert_logotype_info_t logotype_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogotypeInfo
                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_OTHER_LOGOTYPE_INFO.$", 0x18, true, 0x78b716a438188fa7 );              
        SDK_FIXED_SIZE( cert_other_logotype_info_t, 0x18 );              
    };                                                      
};
#include "magic/cert_other_logotype_info_t.end.hpp"
SDK_VERIFY( struct win::cert_other_logotype_info_t, 0x18 );
