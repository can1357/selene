#pragma once
#include <sdkgen/support_library.hpp>
#include "dot11_hrdsss_phy_attributes_t.hpp"

#include "magic/dot11_erp_phy_attributes_t.start.hpp"
namespace ndis
{
    // [struct DOT11_ERP_PHY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_erp_phy_attributes_t                                                        
    {                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                   
        _m00 struct ndis::dot11_hrdsss_phy_attributes_t hrdsss_attributes;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HRDSSSAttributes
        _m01 uint8_t                                    b_erppbcc_option_implemented;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bERPPBCCOptionImplemented
        _m02 uint8_t                                    b_dsssofdm_option_implemented;         //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .bDSSSOFDMOptionImplemented
        _m03 uint8_t                                    b_short_slot_time_option_implemented;  //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bShortSlotTimeOptionImplemented
                                                                                             
        SDK_MAGIC_PROPERTIES( "DOT11_ERP_PHY_ATTRIBUTES.$", 0xc, true, 0x3210cdce54f9dcfa );                                     
        SDK_FIXED_SIZE( dot11_erp_phy_attributes_t, 0xc );                                     
    };                                                                                       
};
#include "magic/dot11_erp_phy_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_erp_phy_attributes_t, 0xc );
