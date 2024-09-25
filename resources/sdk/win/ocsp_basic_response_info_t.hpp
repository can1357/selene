#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/ocsp_basic_response_info_t.start.hpp"
namespace win
{
    struct cert_extension_t;
    struct ocsp_basic_response_entry_t;

    // [struct _OCSP_BASIC_RESPONSE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_basic_response_info_t                                        
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                   
        _m00 uint32_t                                 dw_version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t                                 dw_responder_id_choice;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwResponderIdChoice
        _m02 struct win::cryptoapi_blob_t             by_name_responder_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ByNameResponderId
        _m03 struct win::cryptoapi_blob_t             by_key_responder_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ByKeyResponderId
        _m04 struct win::filetime_t                   produced_at;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProducedAt
        _m05 uint32_t                                 c_response_entry;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cResponseEntry
        _m06 struct win::ocsp_basic_response_entry_t* rg_response_entry;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgResponseEntry
        _m07 uint32_t                                 c_extension;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cExtension
        _m08 struct win::cert_extension_t*            rg_extension;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgExtension
                                                                             
        SDK_MAGIC_PROPERTIES( "_OCSP_BASIC_RESPONSE_INFO.$", 0x40, true, 0xab57516359155b5f );                       
        SDK_FIXED_SIZE( ocsp_basic_response_info_t, 0x40 );                       
    };                                                                       
};
#include "magic/ocsp_basic_response_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_basic_response_info_t, 0x40 );
