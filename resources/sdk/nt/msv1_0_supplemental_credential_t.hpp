#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msv1_0_supplemental_credential_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL]
    // => WDK 10 (NV)
    //
    struct msv1_0_supplemental_credential_t      
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t                version;      //{ +0x0000    } | .Version
        _m01 uint32_t                flags;        //{ +0x0004    } | .Flags
        _m02 sdk::array<uint8_t, 16> lm_password;  //{ +0x0008    } | .LmPassword
        _m03 sdk::array<uint8_t, 16> nt_password;  //{ +0x0018    } | .NtPassword
                                                 
        SDK_NONVOL_PROPERTIES( "_MSV1_0_SUPPLEMENTAL_CREDENTIAL.$", 0x0, false, 0xce2c69420013d8f );            
        SDK_FIXED_SIZE( msv1_0_supplemental_credential_t, 0x28 );            
    };                                           
};
#include "magic/msv1_0_supplemental_credential_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_supplemental_credential_t, 0x28 );
