#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/provider_characteristics_t.start.hpp"
namespace wsk
{
    // [struct _WSK_PROVIDER_CHARACTERISTICS]
    // => WDK 10 (NV)
    //
    struct provider_characteristics_t 
    {                                 
        // WDK 10                     
        //                            
        _m00 uint16_t highest_version;  //{ +0x0000    } | .HighestVersion
        _m01 uint16_t lowest_version;   //{ +0x0002    } | .LowestVersion
                                      
        SDK_NONVOL_PROPERTIES( "_WSK_PROVIDER_CHARACTERISTICS.$", 0x0, false, 0x68ba0945227bf62b );                
        SDK_FIXED_SIZE( provider_characteristics_t, 0x4 );                
    };                                
};
#include "magic/provider_characteristics_t.end.hpp"
SDK_VERIFY( struct wsk::provider_characteristics_t, 0x4 );
