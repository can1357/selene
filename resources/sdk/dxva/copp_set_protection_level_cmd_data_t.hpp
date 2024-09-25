#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copp_set_protection_level_cmd_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPSetProtectionLevelCmdData]
    // => WDK 10 (NV)
    //
    struct copp_set_protection_level_cmd_data_t 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t prot_type;                  //{ +0x0000    } | .ProtType
        _m01 uint32_t prot_level;                 //{ +0x0004    } | .ProtLevel
        _m02 uint32_t extended_info_change_mask;  //{ +0x0008    } | .ExtendedInfoChangeMask
        _m03 uint32_t extended_info_data;         //{ +0x000c    } | .ExtendedInfoData
                                                
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPSetProtectionLevelCmdData.$", 0x0, false, 0x15580196aea5337b );                          
        SDK_FIXED_SIZE( copp_set_protection_level_cmd_data_t, 0x10 );                          
    };                                          
};
#include "magic/copp_set_protection_level_cmd_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_set_protection_level_cmd_data_t, 0x10 );
