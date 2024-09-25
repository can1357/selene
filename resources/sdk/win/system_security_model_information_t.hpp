#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_security_model_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECURITY_MODEL_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_security_model_information_t                                        
    {                                                                                 
        struct u0_security_model_flags_t                                              
        {                                                                             
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
            //                                                                        
            _m00 uint1_t allow_device_owner_protection_downgrade;                       //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .AllowDeviceOwnerProtectionDowngrade
                                                                                      
            // Windows 10 v2004, Windows 10 v20H2                                                             
            //                                                                        
            _m01 uint1_t s_mode_adminless_enabled;                                      //{ +0x0000@0  +0x0000@0  } | .SModeAdminlessEnabled
                                                                                      
            // Windows 11                                                             
            //                                                                        
            _m02 uint1_t reserved_flag;                                                 //{ +0x0000@0  } | .ReservedFlag
                                                                                      
            SDK_MAGIC_PROPERTIES( "_SYSTEM_SECURITY_MODEL_INFORMATION.SecurityModelFlags.$", 0x4, true, 0xb22c1a0640f0746b );                                                             
            SDK_FIXED_SIZE( u0_security_model_flags_t, 0x4 );                                                             
        };                                                                            
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m03 u0_security_model_flags_t                           security_model_flags;  //{ +0x0000    +0x0000    +0x0000    } | .SecurityModelFlags
                                                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECURITY_MODEL_INFORMATION.$", 0x4, true, 0x9e405f4f04b44f8c );                     
        SDK_FIXED_SIZE( system_security_model_information_t, 0x4 );                     
    };                                                                                
};
#include "magic/system_security_model_information_t.end.hpp"
SDK_VERIFY( struct win::system_security_model_information_t::u0_security_model_flags_t, 0x4 );
SDK_VERIFY( struct win::system_security_model_information_t, 0x4 );
