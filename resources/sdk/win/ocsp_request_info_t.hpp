#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ocsp_request_info_t.start.hpp"
namespace win
{
    struct cert_extension_t;
    struct ocsp_request_entry_t;
    struct cert_alt_name_entry_t;

    // [struct _OCSP_REQUEST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_request_info_t                                   
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                       
        _m00 uint32_t                           dw_version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cert_alt_name_entry_t* p_requestor_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRequestorName
        _m02 uint32_t                           c_request_entry;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cRequestEntry
        _m03 struct win::ocsp_request_entry_t*  rg_request_entry;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgRequestEntry
        _m04 uint32_t                           c_extension;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cExtension
        _m05 struct win::cert_extension_t*      rg_extension;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgExtension
                                                                 
        SDK_MAGIC_PROPERTIES( "_OCSP_REQUEST_INFO.$", 0x30, true, 0x86d65f41af08c71f );                 
        SDK_FIXED_SIZE( ocsp_request_info_t, 0x30 );                 
    };                                                           
};
#include "magic/ocsp_request_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_request_info_t, 0x30 );
