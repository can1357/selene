#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/feature_configuration_type_t.hpp"
#include "../rtl/feature_configuration_update_t.hpp"

#include "magic/system_feature_configuration_update_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_UPDATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_update_t                          
    {                                                                     
        using updates_t = sdk::array<struct rtl::feature_configuration_update_t, 1>;                      
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                
        _m00 uint64_t                               previous_change_stamp;  //{ +0x0000    +0x0000    +0x0000    } | .PreviousChangeStamp
        _m01 enum rtl::feature_configuration_type_t configuration_type;     //{ +0x0008    +0x0008    +0x0008    } | .ConfigurationType
        _m02 uint32_t                               update_count;           //{ +0x000c    +0x000c    +0x000c    } | .UpdateCount
        _m03 updates_t                              updates;                //{ +0x0010    +0x0010    +0x0010    } | .Updates
                                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_UPDATE.$", 0x30, true, 0x4e9fab4b348d8ac9 );                      
        SDK_FIXED_SIZE( system_feature_configuration_update_t, 0x30 );                      
    };                                                                    
};
#include "magic/system_feature_configuration_update_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_update_t, 0x30 );
