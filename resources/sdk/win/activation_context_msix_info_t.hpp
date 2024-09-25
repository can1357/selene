#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_msix_info_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_MSIX_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_msix_info_t                       
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                      
        _m00 sdk::array<wchar_t, 130> application_user_model_id;  //{ +0x0000    +0x0000    +0x0000    } | .ApplicationUserModelId
                                                                
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_MSIX_INFO.$", 0x104, true, 0xf8e2e90e1791f3fa );                          
        SDK_FIXED_SIZE( activation_context_msix_info_t, 0x104 );                          
    };                                                          
};
#include "magic/activation_context_msix_info_t.end.hpp"
SDK_VERIFY( struct win::activation_context_msix_info_t, 0x104 );
