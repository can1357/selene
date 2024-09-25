#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_system_call_disable_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_SYSTEM_CALL_DISABLE_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_system_call_disable_policy_t                    
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 union rtl::image_mitigation_policy_t block_win32k_system_calls;  //{ +0x0000    +0x0000    +0x0000    } | .BlockWin32kSystemCalls
                                                                            
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_SYSTEM_CALL_DISABLE_POLICY.$", 0x8, true, 0x3704268d18b30d60 );                          
        SDK_FIXED_SIZE( image_mitigation_system_call_disable_policy_t, 0x8 );                          
    };                                                                      
};
#include "magic/image_mitigation_system_call_disable_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_system_call_disable_policy_t, 0x8 );
