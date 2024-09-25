#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/domain_password_information_t.start.hpp"
namespace nt
{
    // [struct _DOMAIN_PASSWORD_INFORMATION]
    // => WDK 10 (NV)
    //
    struct domain_password_information_t      
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint16_t min_password_length;      //{ +0x0000    } | .MinPasswordLength
        _m01 uint16_t password_history_length;  //{ +0x0002    } | .PasswordHistoryLength
        _m02 uint32_t password_properties;      //{ +0x0004    } | .PasswordProperties
        _m03 int64_t  max_password_age;         //{ +0x0008    } | .MaxPasswordAge
        _m04 int64_t  min_password_age;         //{ +0x0010    } | .MinPasswordAge
                                              
        SDK_NONVOL_PROPERTIES( "_DOMAIN_PASSWORD_INFORMATION.$", 0x0, false, 0x547b83ed8b05fddb );                        
        SDK_FIXED_SIZE( domain_password_information_t, 0x18 );                        
    };                                        
};
#include "magic/domain_password_information_t.end.hpp"
SDK_VERIFY( struct nt::domain_password_information_t, 0x18 );
