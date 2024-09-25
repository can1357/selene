#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/m_bctrl_i_host_resid_diff_1_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_MBctrl_I_HostResidDiff_1]
    // => WDK 10 (NV)
    //
    struct m_bctrl_i_host_resid_diff_1_t
    {                                   
        // WDK 10                       
        //                              
        _m00 uint16_t w_m_baddress;       //{ +0x0000    } | .wMBaddress
        _m01 uint16_t w_m_btype;          //{ +0x0002    } | .wMBtype
        _m02 uint32_t dw_mb_snl;          //{ +0x0004    } | .dwMB_SNL
        _m03 uint16_t w_pattern_code;     //{ +0x0008    } | .wPatternCode
        _m04 uint16_t w_pc_overflow;      //{ +0x000a    } | .wPC_Overflow
        _m05 uint32_t dw_reserved_bits2;  //{ +0x000c    } | .dwReservedBits2
                                        
        SDK_NONVOL_PROPERTIES( "_DXVA_MBctrl_I_HostResidDiff_1.$", 0x0, false, 0x70713e1c85f4a974 );                  
        SDK_FIXED_SIZE( m_bctrl_i_host_resid_diff_1_t, 0x10 );                  
    };                                  
};
#include "magic/m_bctrl_i_host_resid_diff_1_t.end.hpp"
SDK_VERIFY( struct dxva::m_bctrl_i_host_resid_diff_1_t, 0x10 );
