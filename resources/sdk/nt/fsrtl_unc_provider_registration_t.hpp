#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_unc_provider_registration_t.start.hpp"
namespace nt
{
    // [struct _FSRTL_UNC_PROVIDER_REGISTRATION]
    // => WDK 10 (NV)
    //
    struct fsrtl_unc_provider_registration_t 
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint16_t size;                    //{ +0x0000    } | .Size
        _m01 uint16_t version;                 //{ +0x0002    } | .Version
        _m02 uint32_t provider_flags;          //{ +0x0004    } | .ProviderFlags
        _m03 uint1_t  mailslots_supported;     //{ +0x0004@0  } | .MailslotsSupported
        _m04 uint1_t  csc_enabled;             //{ +0x0004@1  } | .CscEnabled
        _m05 uint1_t  domain_svc_aware;        //{ +0x0004@2  } | .DomainSvcAware
        _m06 uint1_t  containers_aware;        //{ +0x0004@3  } | .ContainersAware
        _m07 uint32_t hardening_capabilities;  //{ +0x0008    } | .HardeningCapabilities
        _m08 uint1_t  supports_mutual_auth;    //{ +0x0008@0  } | .SupportsMutualAuth
        _m09 uint1_t  supports_integrity;      //{ +0x0008@1  } | .SupportsIntegrity
        _m10 uint1_t  supports_privacy;        //{ +0x0008@2  } | .SupportsPrivacy
                                             
        SDK_NONVOL_PROPERTIES( "_FSRTL_UNC_PROVIDER_REGISTRATION.$", 0x0, false, 0x3185509adfecfff2 );                       
        SDK_FIXED_SIZE( fsrtl_unc_provider_registration_t, 0xc );                       
    };                                       
};
#include "magic/fsrtl_unc_provider_registration_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_unc_provider_registration_t, 0xc );
