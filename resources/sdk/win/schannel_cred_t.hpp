#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/schannel_cred_t.start.hpp"
namespace win
{
    struct hmapper_t;
    struct cert_context_t;

    // [struct _SCHANNEL_CRED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct schannel_cred_t                                                 
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m00 uint32_t                           dw_version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t                           c_creds;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cCreds
        _m02 const struct win::cert_context_t** pa_cred;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .paCred
        _m03 void*                              h_root_store;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hRootStore
        _m04 uint32_t                           c_mappers;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cMappers
        _m05 struct win::hmapper_t**            aph_mappers;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .aphMappers
        _m06 uint32_t                           c_supported_algs;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .cSupportedAlgs
        _m07 uint32_t*                          palg_supported_algs;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .palgSupportedAlgs
        _m08 uint32_t                           grbit_enabled_protocols;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .grbitEnabledProtocols
        _m09 uint32_t                           dw_minimum_cipher_strength;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwMinimumCipherStrength
        _m10 uint32_t                           dw_maximum_cipher_strength;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwMaximumCipherStrength
        _m11 uint32_t                           dw_session_lifespan;         //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwSessionLifespan
        _m12 uint32_t                           dw_flags;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .dwFlags
        _m13 uint32_t                           dw_cred_format;              //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .dwCredFormat
                                                                           
        SDK_MAGIC_PROPERTIES( "_SCHANNEL_CRED.$", 0x50, true, 0x6706d51c6b473ec0 );                           
        SDK_FIXED_SIZE( schannel_cred_t, 0x50 );                           
    };                                                                     
};
#include "magic/schannel_cred_t.end.hpp"
SDK_VERIFY( struct win::schannel_cred_t, 0x50 );
