#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_mup_provider_info_level_1_t.start.hpp"
namespace nt
{
    // [struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_1]
    // => WDK 10 (NV)
    //
    struct fsrtl_mup_provider_info_level_1_t
    {                                       
        // WDK 10                 
        //                        
        _m00 uint32_t provider_id;            //{ +0x0000    } | .ProviderId
                                            
        SDK_NONVOL_PROPERTIES( "_FSRTL_MUP_PROVIDER_INFO_LEVEL_1.$", 0x0, false, 0x6405a1f0f6287b6c );            
        SDK_FIXED_SIZE( fsrtl_mup_provider_info_level_1_t, 0x4 );            
    };                                      
};
#include "magic/fsrtl_mup_provider_info_level_1_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_mup_provider_info_level_1_t, 0x4 );
