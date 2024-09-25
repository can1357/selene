#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_revocation_chain_para_t.start.hpp"
namespace win
{
    struct filetime_t;

    // [struct _CERT_REVOCATION_CHAIN_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_revocation_chain_para_t                              
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                           
        _m00 uint32_t                cb_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 void*                   h_chain_engine;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hChainEngine
        _m02 void*                   h_additional_store;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hAdditionalStore
        _m03 uint32_t                dw_chain_flags;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwChainFlags
        _m04 uint32_t                dw_url_retrieval_timeout;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwUrlRetrievalTimeout
        _m05 struct win::filetime_t* pft_current_time;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pftCurrentTime
        _m06 struct win::filetime_t* pft_cache_resync;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pftCacheResync
        _m07 uint32_t                cb_max_url_retrieval_byte_count;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cbMaxUrlRetrievalByteCount
                                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_REVOCATION_CHAIN_PARA.$", 0x38, true, 0x4cfc4ef7f2ee5e4f );                                
        SDK_FIXED_SIZE( cert_revocation_chain_para_t, 0x38 );                                
    };                                                               
};
#include "magic/cert_revocation_chain_para_t.end.hpp"
SDK_VERIFY( struct win::cert_revocation_chain_para_t, 0x38 );
