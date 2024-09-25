#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_chain_engine_config_t.start.hpp"
namespace win
{
    // [struct _CERT_CHAIN_ENGINE_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_chain_engine_config_t             
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t cb_size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 void*    h_restricted_root;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hRestrictedRoot
        _m02 void*    h_restricted_trust;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hRestrictedTrust
        _m03 void*    h_restricted_other;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hRestrictedOther
        _m04 uint32_t c_additional_store;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cAdditionalStore
        _m05 void**   rgh_additional_store;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rghAdditionalStore
        _m06 uint32_t dw_flags;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwFlags
        _m07 uint32_t dw_url_retrieval_timeout;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwUrlRetrievalTimeout
        _m08 uint32_t maximum_cached_certificates;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaximumCachedCertificates
        _m09 uint32_t cycle_detection_modulus;      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .CycleDetectionModulus
        _m10 void*    h_exclusive_root;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .hExclusiveRoot
        _m11 void*    h_exclusive_trusted_people;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .hExclusiveTrustedPeople
        _m12 uint32_t dw_exclusive_flags;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .dwExclusiveFlags
                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_CHAIN_ENGINE_CONFIG.$", 0x58, true, 0x55245179a9b1e166 );                            
        SDK_FIXED_SIZE( cert_chain_engine_config_t, 0x58 );                            
    };                                            
};
#include "magic/cert_chain_engine_config_t.end.hpp"
SDK_VERIFY( struct win::cert_chain_engine_config_t, 0x58 );
