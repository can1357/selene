#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_oid_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_OID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_oid_info_t                           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 uint32_t                     cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const char*                  psz_oid;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszOID
        _m02 const wchar_t*               pwsz_name;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszName
        _m03 uint32_t                     dw_group_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwGroupId
        _m04 uint32_t                     dw_value;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwValue
        _m05 uint32_t                     algid;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Algid
        _m06 uint32_t                     dw_length;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwLength
        _m07 struct win::cryptoapi_blob_t extra_info;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtraInfo
                                                      
        SDK_MAGIC_PROPERTIES( "_CRYPT_OID_INFO.$", 0x30, true, 0x59d4a0d1308b0085 );            
        SDK_FIXED_SIZE( crypt_oid_info_t, 0x30 );            
    };                                                
};
#include "magic/crypt_oid_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_oid_info_t, 0x30 );
