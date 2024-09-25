#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_logical_block_provisioning_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_LOGICAL_BLOCK_PROVISIONING_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_logical_block_provisioning_page_t             
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint5_t                device_type;               //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                device_type_qualifier;     //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                page_code;                 //{ +0x0001    } | .PageCode
        _m03 sdk::array<uint8_t, 2> page_length;               //{ +0x0002    } | .PageLength
        _m04 uint8_t                threshold_exponent;        //{ +0x0004    } | .ThresholdExponent
        _m05 uint1_t                dp;                        //{ +0x0005@0  } | .DP
        _m06 uint1_t                anc_sup;                   //{ +0x0005@1  } | .ANC_SUP
        _m07 uint1_t                lbprz;                     //{ +0x0005@2  } | .LBPRZ
        _m08 uint1_t                lbpws10;                   //{ +0x0005@5  } | .LBPWS10
        _m09 uint1_t                lbpws;                     //{ +0x0005@6  } | .LBPWS
        _m10 uint1_t                lbpu;                      //{ +0x0005@7  } | .LBPU
        _m11 uint3_t                provisioning_type;         //{ +0x0006@0  } | .ProvisioningType
        _m12 sdk::array<uint8_t>    provisioning_group_descr;  //{ +0x0008    } | .ProvisioningGroupDescr
                                                             
        SDK_NONVOL_PROPERTIES( "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.$", 0x0, false, 0x915802c012c25a04 );                         
        SDK_FIXED_SIZE( vpd_logical_block_provisioning_page_t, 0x8 );                         
    };                                                       
};
#include "magic/vpd_logical_block_provisioning_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_logical_block_provisioning_page_t, 0x8 );
