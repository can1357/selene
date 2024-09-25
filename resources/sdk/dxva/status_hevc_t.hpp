#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_hevc_t.hpp"

#include "magic/status_hevc_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Status_HEVC]
    // => WDK 10 (NV)
    //
    struct status_hevc_t                                                 
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint16_t                      status_report_feedback_number;  //{ +0x0000    } | .StatusReportFeedbackNumber
        _m01 struct dxva::pic_entry_hevc_t curr_pic;                       //{ +0x0002    } | .CurrPic
        _m02 uint8_t                       b_buf_type;                     //{ +0x0003    } | .bBufType
        _m03 uint8_t                       b_status;                       //{ +0x0004    } | .bStatus
        _m04 uint8_t                       b_reserved8_bits;               //{ +0x0005    } | .bReserved8Bits
        _m05 uint16_t                      w_num_mbs_affected;             //{ +0x0006    } | .wNumMbsAffected
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXVA_Status_HEVC.$", 0x0, false, 0x17bbe100a7053f9d );                              
        SDK_FIXED_SIZE( status_hevc_t, 0x8 );                              
    };                                                                   
};
#include "magic/status_hevc_t.end.hpp"
SDK_VERIFY( struct dxva::status_hevc_t, 0x8 );
