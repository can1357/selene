#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_template_ext_t.start.hpp"
namespace win
{
    // [struct _CERT_TEMPLATE_EXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_template_ext_t         
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 char*    psz_obj_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 uint32_t dw_major_version;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwMajorVersion
        _m02 int32_t  f_minor_version;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .fMinorVersion
        _m03 uint32_t dw_minor_version;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwMinorVersion
                                       
        SDK_MAGIC_PROPERTIES( "_CERT_TEMPLATE_EXT.$", 0x18, true, 0xbcaea3879b9cf505 );                 
        SDK_FIXED_SIZE( cert_template_ext_t, 0x18 );                 
    };                                 
};
#include "magic/cert_template_ext_t.end.hpp"
SDK_VERIFY( struct win::cert_template_ext_t, 0x18 );
