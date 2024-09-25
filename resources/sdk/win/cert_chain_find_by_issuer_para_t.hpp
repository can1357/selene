#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_chain_find_by_issuer_para_t.start.hpp"
namespace win
{
    struct cert_context_t;
    struct cryptoapi_blob_t;

    // [struct _CERT_CHAIN_FIND_BY_ISSUER_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_find_by_issuer_para_t                                         
    {                                                                               
        using pfn_cert_chain_find_by_issuer_callback_t = sdk::function<int32_t(const struct win::cert_context_t*, void*)>*;                             
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                          
        _m00 uint32_t                                  cb_size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const char*                               psz_usage_identifier;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszUsageIdentifier
        _m02 uint32_t                                  dw_key_spec;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwKeySpec
        _m03 uint32_t                                  dw_acquire_private_key_flags;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwAcquirePrivateKeyFlags
        _m04 uint32_t                                  c_issuer;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cIssuer
        _m05 struct win::cryptoapi_blob_t*             rg_issuer;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgIssuer
        _m06 pfn_cert_chain_find_by_issuer_callback_t  pfn_find_callback;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pfnFindCallback
        _m07 void*                                     pv_find_arg;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pvFindArg
                                                                                    
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_FIND_BY_ISSUER_PARA.$", 0x38, true, 0x27a55df46fd0d903 );                             
        SDK_FIXED_SIZE( cert_chain_find_by_issuer_para_t, 0x38 );                             
    };                                                                              
};
#include "magic/cert_chain_find_by_issuer_para_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_find_by_issuer_para_t, 0x38 );
