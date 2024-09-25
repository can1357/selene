#pragma once
#include <sdkgen/support_library.hpp>
#include "m_vvalue_t.hpp"

#include "magic/m_bctrl_p_off_host_idct_1_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_MBctrl_P_OffHostIDCT_1]
    // => WDK 10 (NV)
    //
    struct m_bctrl_p_off_host_idct_1_t                             
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint16_t                               w_m_baddress;    //{ +0x0000    } | .wMBaddress
        _m01 uint16_t                               w_m_btype;       //{ +0x0002    } | .wMBtype
        _m02 uint32_t                               dw_mb_snl;       //{ +0x0004    } | .dwMB_SNL
        _m03 uint16_t                               w_pattern_code;  //{ +0x0008    } | .wPatternCode
        _m04 sdk::array<uint8_t, 6>                 b_num_coef;      //{ +0x000a    } | .bNumCoef
        _m05 sdk::array<struct dxva::m_vvalue_t, 4> m_vector;        //{ +0x0010    } | .MVector
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXVA_MBctrl_P_OffHostIDCT_1.$", 0x0, false, 0x18542dcd0c301d2d );               
        SDK_FIXED_SIZE( m_bctrl_p_off_host_idct_1_t, 0x20 );               
    };                                                             
};
#include "magic/m_bctrl_p_off_host_idct_1_t.end.hpp"
SDK_VERIFY( struct dxva::m_bctrl_p_off_host_idct_1_t, 0x20 );
