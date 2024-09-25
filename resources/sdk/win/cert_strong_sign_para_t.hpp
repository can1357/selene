#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_strong_sign_para_t.start.hpp"
namespace win
{
    struct cert_strong_sign_serialized_info_t;

    // [struct _CERT_STRONG_SIGN_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_strong_sign_para_t                                             
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                     
        _m00 uint32_t                                        cb_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                        dw_info_choice;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwInfoChoice
        _m02 void*                                           pv_info;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvInfo
        _m03 struct win::cert_strong_sign_serialized_info_t* p_serialized_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pSerializedInfo
        _m04 char*                                           psz_oid;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszOID
                                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_STRONG_SIGN_PARA.$", 0x10, true, 0x91e72a83a1f2702 );                  
        SDK_FIXED_SIZE( cert_strong_sign_para_t, 0x10 );                       
    };                                                                         
};
#include "magic/cert_strong_sign_para_t.end.hpp"
SDK_VERIFY( struct win::cert_strong_sign_para_t, 0x10 );
