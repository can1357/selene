#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_store_prov_find_info_t.start.hpp"
namespace win
{
    // [struct _CERT_STORE_PROV_FIND_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_store_prov_find_info_t                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                             
        _m00 uint32_t    cb_size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t    dw_msg_and_cert_encoding_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMsgAndCertEncodingType
        _m02 uint32_t    dw_find_flags;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFindFlags
        _m03 uint32_t    dw_find_type;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFindType
        _m04 const void* pv_find_para;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvFindPara
                                                       
        SDK_MAGIC_PROPERTIES( "_CERT_STORE_PROV_FIND_INFO.$", 0x18, true, 0x73f301f98ccc3093 );                              
        SDK_FIXED_SIZE( cert_store_prov_find_info_t, 0x18 );                              
    };                                                 
};
#include "magic/cert_store_prov_find_info_t.end.hpp"
SDK_VERIFY( struct win::cert_store_prov_find_info_t, 0x18 );
