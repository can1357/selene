#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_mup_provider_info_level_2_t.start.hpp"
namespace nt
{
    // [struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_2]
    // => WDK 10 (NV)
    //
    struct fsrtl_mup_provider_info_level_2_t
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t         provider_id;    //{ +0x0000    } | .ProviderId
        _m01 nt::unicode_view provider_name;  //{ +0x0008    } | .ProviderName
                                            
        SDK_NONVOL_PROPERTIES( "_FSRTL_MUP_PROVIDER_INFO_LEVEL_2.$", 0x0, false, 0xed2ae0039b9c2447 );              
        SDK_FIXED_SIZE( fsrtl_mup_provider_info_level_2_t, 0x18 );              
    };                                      
};
#include "magic/fsrtl_mup_provider_info_level_2_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_mup_provider_info_level_2_t, 0x18 );
