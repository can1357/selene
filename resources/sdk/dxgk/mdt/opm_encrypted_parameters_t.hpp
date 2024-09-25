#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/opm_encrypted_parameters_t.start.hpp"
namespace dxgk::mdt
{
    // [struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct opm_encrypted_parameters_t                         
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 sdk::array<uint8_t, 256> ab_encrypted_parameters;  //{ +0x0000    } | .abEncryptedParameters
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.$", 0x0, false, 0x17ad1fc54c9f1186 );                        
        SDK_FIXED_SIZE( opm_encrypted_parameters_t, 0x100 );                        
    };                                                        
};
#include "magic/opm_encrypted_parameters_t.end.hpp"
SDK_VERIFY( struct dxgk::mdt::opm_encrypted_parameters_t, 0x100 );
