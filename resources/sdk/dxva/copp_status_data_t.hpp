#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/copp_status_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_COPPStatusData]
    // => WDK 10 (NV)
    //
    struct copp_status_data_t                           
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 struct nt::guid_t r_app;                     //{ +0x0000    } | .rApp
        _m01 uint32_t          dw_flags;                  //{ +0x0010    } | .dwFlags
        _m02 uint32_t          dw_data;                   //{ +0x0014    } | .dwData
        _m03 uint32_t          extended_info_valid_mask;  //{ +0x0018    } | .ExtendedInfoValidMask
        _m04 uint32_t          extended_info_data;        //{ +0x001c    } | .ExtendedInfoData
                                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_COPPStatusData.$", 0x0, false, 0x3bfc4dac7c472058 );                         
        SDK_FIXED_SIZE( copp_status_data_t, 0x20 );                         
    };                                                  
};
#include "magic/copp_status_data_t.end.hpp"
SDK_VERIFY( struct dxva::copp_status_data_t, 0x20 );
