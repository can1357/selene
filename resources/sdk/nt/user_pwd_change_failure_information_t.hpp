#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_pwd_change_failure_information_t.start.hpp"
namespace nt
{
    // [struct _USER_PWD_CHANGE_FAILURE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct user_pwd_change_failure_information_t      
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t         extended_failure_reason;  //{ +0x0000    } | .ExtendedFailureReason
        _m01 nt::unicode_view filter_module_name;       //{ +0x0008    } | .FilterModuleName
                                                      
        SDK_NONVOL_PROPERTIES( "_USER_PWD_CHANGE_FAILURE_INFORMATION.$", 0x0, false, 0xab51c7a5b349eff );                        
        SDK_FIXED_SIZE( user_pwd_change_failure_information_t, 0x18 );                        
    };                                                
};
#include "magic/user_pwd_change_failure_information_t.end.hpp"
SDK_VERIFY( struct nt::user_pwd_change_failure_information_t, 0x18 );
