#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_ofdm_phy_attributes_t.start.hpp"
namespace ndis
{
    // [struct DOT11_OFDM_PHY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_ofdm_phy_attributes_t            
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t u_frequency_bands_supported;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .uFrequencyBandsSupported
                                                  
        SDK_MAGIC_PROPERTIES( "DOT11_OFDM_PHY_ATTRIBUTES.$", 0x4, true, 0xad937e72c94d546f );                            
        SDK_FIXED_SIZE( dot11_ofdm_phy_attributes_t, 0x4 );                            
    };                                            
};
#include "magic/dot11_ofdm_phy_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_ofdm_phy_attributes_t, 0x4 );
