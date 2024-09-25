#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_mitigation_binary_signature_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_mitigation_binary_signature_policy_t
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t flags;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  microsoft_signed_only;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MicrosoftSignedOnly
        _m02 uint1_t  store_signed_only;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .StoreSignedOnly
        _m03 uint1_t  mitigation_opt_in;                 //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .MitigationOptIn
                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m04 uint1_t  audit_microsoft_signed_only;       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .AuditMicrosoftSignedOnly
        _m05 uint1_t  audit_store_signed_only;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .AuditStoreSignedOnly
                                                       
        SDK_NONVOL_PROPERTIES( "_PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY.$", 0x4, true, 0x2146742be5df39eb );                            
        SDK_FIXED_SIZE( process_mitigation_binary_signature_policy_t, 0x4 );                            
    };                                                 
};
#include "magic/process_mitigation_binary_signature_policy_t.end.hpp"
SDK_VERIFY( struct win::process_mitigation_binary_signature_policy_t, 0x4 );
