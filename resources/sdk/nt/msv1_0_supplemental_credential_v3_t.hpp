#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_credential_key_t.hpp"
#include "msv1_0_credential_key_type_t.hpp"

#include "magic/msv1_0_supplemental_credential_v3_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3]
    // => WDK 10 (NV)
    //
    struct msv1_0_supplemental_credential_v3_t                         
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                              version;              //{ +0x0000    } | .Version
        _m01 uint32_t                              flags;                //{ +0x0004    } | .Flags
        _m02 enum nt::msv1_0_credential_key_type_t credential_key_type;  //{ +0x0008    } | .CredentialKeyType
        _m03 sdk::array<uint8_t, 16>               nt_password;          //{ +0x000c    } | .NtPassword
        _m04 struct nt::msv1_0_credential_key_t    credential_key;       //{ +0x001c    } | .CredentialKey
        _m05 sdk::array<uint8_t, 20>               sha_password;         //{ +0x0030    } | .ShaPassword
                                                                       
        SDK_NONVOL_PROPERTIES( "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3.$", 0x0, false, 0x80c92cd5247ea346 );                    
        SDK_FIXED_SIZE( msv1_0_supplemental_credential_v3_t, 0x44 );                    
    };                                                                 
};
#include "magic/msv1_0_supplemental_credential_v3_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_supplemental_credential_v3_t, 0x44 );
