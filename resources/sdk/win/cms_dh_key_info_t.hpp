#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cms_dh_key_info_t.start.hpp"
namespace win
{
    // [struct _CMS_DH_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cms_dh_key_info_t                                     
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                       
        _m00 uint32_t                     dw_version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t                     algid;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Algid
        _m02 char*                        psz_content_enc_obj_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszContentEncObjId
        _m03 struct win::cryptoapi_blob_t pub_info;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PubInfo
        _m04 void*                        p_reserved;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pReserved
                                                                 
        SDK_MAGIC_PROPERTIES( "_CMS_DH_KEY_INFO.$", 0x28, true, 0x6305f7e14798c0ca );                       
        SDK_FIXED_SIZE( cms_dh_key_info_t, 0x28 );                       
    };                                                           
};
#include "magic/cms_dh_key_info_t.end.hpp"
SDK_VERIFY( struct win::cms_dh_key_info_t, 0x28 );
