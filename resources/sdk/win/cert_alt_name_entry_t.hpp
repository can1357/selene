#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_alt_name_entry_t.start.hpp"
namespace win
{
    struct cert_other_name_t;

    // [struct _CERT_ALT_NAME_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_alt_name_entry_t                               
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint32_t                       dw_alt_name_choice;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwAltNameChoice
        _m01 struct win::cert_other_name_t* p_other_name;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pOtherName
        _m02 wchar_t*                       pwsz_rfc822_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszRfc822Name
        _m03 wchar_t*                       pwsz_dns_name;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszDNSName
        _m04 struct win::cryptoapi_blob_t   directory_name;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DirectoryName
        _m05 wchar_t*                       pwsz_url;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszURL
        _m06 struct win::cryptoapi_blob_t   ip_address;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IPAddress
        _m07 char*                          psz_registered_id;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszRegisteredID
                                                               
        SDK_MAGIC_PROPERTIES( "_CERT_ALT_NAME_ENTRY.$", 0x18, true, 0xe1dce74023db97b5 );                   
        SDK_FIXED_SIZE( cert_alt_name_entry_t, 0x18 );                   
    };                                                         
};
#include "magic/cert_alt_name_entry_t.end.hpp"
SDK_VERIFY( struct win::cert_alt_name_entry_t, 0x18 );
