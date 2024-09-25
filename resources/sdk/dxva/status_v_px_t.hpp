#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_v_px_t.hpp"

#include "magic/status_v_px_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Status_VPx]
    // => WDK 10 (NV)
    //
    struct status_v_px_t                                                 
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                      status_report_feedback_number;  //{ +0x0000    } | .StatusReportFeedbackNumber
        _m01 struct dxva::pic_entry_v_px_t curr_pic;                       //{ +0x0004    } | .CurrPic
        _m02 uint8_t                       b_buf_type;                     //{ +0x0005    } | .bBufType
        _m03 uint8_t                       b_status;                       //{ +0x0006    } | .bStatus
        _m04 uint8_t                       b_reserved8_bits;               //{ +0x0007    } | .bReserved8Bits
        _m05 uint16_t                      w_num_mbs_affected;             //{ +0x0008    } | .wNumMbsAffected
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXVA_Status_VPx.$", 0x0, false, 0x130dfd1cc88a5dab );                              
        SDK_FIXED_SIZE( status_v_px_t, 0xa );                              
    };                                                                   
};
#include "magic/status_v_px_t.end.hpp"
SDK_VERIFY( struct dxva::status_v_px_t, 0xa );
