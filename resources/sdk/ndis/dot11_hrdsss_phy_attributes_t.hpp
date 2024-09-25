#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_hrdsss_phy_attributes_t.start.hpp"
namespace ndis
{
    // [struct DOT11_HRDSSS_PHY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_hrdsss_phy_attributes_t                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint8_t  b_short_preamble_option_implemented;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bShortPreambleOptionImplemented
        _m01 uint8_t  b_pbcc_option_implemented;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bPBCCOptionImplemented
        _m02 uint8_t  b_channel_agility_present;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bChannelAgilityPresent
        _m03 uint32_t u_hrcca_mode_supported;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uHRCCAModeSupported
                                                          
        SDK_MAGIC_PROPERTIES( "DOT11_HRDSSS_PHY_ATTRIBUTES.$", 0x8, true, 0xa2443677d51c3909 );                                    
        SDK_FIXED_SIZE( dot11_hrdsss_phy_attributes_t, 0x8 );                                    
    };                                                    
};
#include "magic/dot11_hrdsss_phy_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_hrdsss_phy_attributes_t, 0x8 );
