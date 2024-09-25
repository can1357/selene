#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_server_ocsp_response_open_para_t.start.hpp"
namespace win
{
    struct crl_context_t;
    struct cert_chain_context_t;
    struct cert_server_ocsp_response_context_t;

    // [struct _CERT_SERVER_OCSP_RESPONSE_OPEN_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_server_ocsp_response_open_para_t                                     
    {                                                                                
        using pfn_cert_server_ocsp_response_update_callback_t = sdk::function<void(const struct win::cert_chain_context_t*, const struct win::cert_server_ocsp_response_context_t*, const struct win::crl_context_t*, const struct win::crl_context_t*, void*, uint32_t)>*;                       
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                           
        _m00 uint32_t                                         cb_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                                         dw_flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t*                                        pcb_used_size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pcbUsedSize
        _m03 wchar_t*                                         pwsz_ocsp_directory;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszOcspDirectory
        _m04 pfn_cert_server_ocsp_response_update_callback_t  pfn_update_callback;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnUpdateCallback
        _m05 void*                                            pv_update_callback_arg;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvUpdateCallbackArg
                                                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_SERVER_OCSP_RESPONSE_OPEN_PARA.$", 0x28, true, 0x9eba030ca3a7fe6f );                       
        SDK_FIXED_SIZE( cert_server_ocsp_response_open_para_t, 0x28 );                       
    };                                                                               
};
#include "magic/cert_server_ocsp_response_open_para_t.end.hpp"
SDK_VERIFY( struct win::cert_server_ocsp_response_open_para_t, 0x28 );
