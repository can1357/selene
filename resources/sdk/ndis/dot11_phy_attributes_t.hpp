#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "dot11_phy_type_t.hpp"
#include "dot11_temp_type_t.hpp"
#include "dot11_diversity_support_t.hpp"
#include "dot11_erp_phy_attributes_t.hpp"
#include "dot11_ofdm_phy_attributes_t.hpp"
#include "dot11_hrdsss_phy_attributes_t.hpp"
#include "dot11_data_rate_mapping_entry_t.hpp"
#include "dot11_supported_data_rates_value_v2_t.hpp"

#include "magic/dot11_phy_attributes_t.start.hpp"
namespace ndis
{
    // [struct DOT11_PHY_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_phy_attributes_t                                                                             
    {                                                                                                         
        union u0_phy_specific_attributes_t                                                                    
        {                                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
            //                                                                                                
            _m08 struct ndis::dot11_hrdsss_phy_attributes_t hrdsss_attributes;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HRDSSSAttributes
            _m09 struct ndis::dot11_ofdm_phy_attributes_t   ofdm_attributes;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OFDMAttributes
            _m10 struct ndis::dot11_erp_phy_attributes_t    erp_attributes;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ERPAttributes
                                                                                                              
            SDK_MAGIC_PROPERTIES( "DOT11_PHY_ATTRIBUTES.PhySpecificAttributes.$", 0xc, true, 0x3392fb48fe9bf4fa );                                                  
            SDK_FIXED_SIZE( u0_phy_specific_attributes_t, 0xc );                                                  
        };                                                                                                    
                                                                                                              
        using data_rate_mapping_entries_t =  sdk::array<struct ndis::dot11_data_rate_mapping_entry_t, 126>;                                
        using supported_data_rates_value_t = struct ndis::dot11_supported_data_rates_value_v2_t;                                
                                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                                    
        _m00 struct ndis::object_header_t                                     header;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 enum ndis::dot11_phy_type_t                                      phy_type;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PhyType
        _m02 uint8_t                                                          b_hardware_phy_state;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bHardwarePhyState
        _m03 uint8_t                                                          b_software_phy_state;             //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .bSoftwarePhyState
        _m04 uint8_t                                                          b_cf_pollable;                    //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .bCFPollable
        _m05 uint32_t                                                         u_mpdu_max_length;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uMPDUMaxLength
        _m06 enum ndis::dot11_temp_type_t                                     temp_type;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TempType
        _m07 enum ndis::dot11_diversity_support_t                             diversity_support;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DiversitySupport
        _m11 u0_phy_specific_attributes_t                                     phy_specific_attributes;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PhySpecificAttributes
        _m12 uint32_t                                                         u_number_supported_power_levels;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .uNumberSupportedPowerLevels
        _m13 sdk::array<uint32_t, 8>                                          tx_power_levels;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TxPowerLevels
        _m14 uint32_t                                                         u_num_data_rate_mapping_entries;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .uNumDataRateMappingEntries
        _m15 data_rate_mapping_entries_t                                      data_rate_mapping_entries;        //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .DataRateMappingEntries
        _m16 supported_data_rates_value_t                                     supported_data_rates_value;       //{ +0x0244    +0x0244    +0x0244    +0x0244    } | .SupportedDataRatesValue
                                                                                                              
        SDK_MAGIC_PROPERTIES( "DOT11_PHY_ATTRIBUTES.$", 0x444, true, 0xab52cc0d8039e3c8 );                                
        SDK_FIXED_SIZE( dot11_phy_attributes_t, 0x444 );                                                      
    };                                                                                                        
};
#include "magic/dot11_phy_attributes_t.end.hpp"
SDK_VERIFY( union ndis::dot11_phy_attributes_t::u0_phy_specific_attributes_t, 0xc );
SDK_VERIFY( struct ndis::dot11_phy_attributes_t, 0x444 );
