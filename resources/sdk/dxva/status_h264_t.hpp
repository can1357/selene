#pragma once
#include <sdkgen/support_library.hpp>
#include "pic_entry_h264_t.hpp"

#include "magic/status_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Status_H264]
    // => WDK 10 (NV)
    //
    struct status_h264_t                                                 
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint32_t                      status_report_feedback_number;  //{ +0x0000    } | .StatusReportFeedbackNumber
        _m01 struct dxva::pic_entry_h264_t curr_pic;                       //{ +0x0004    } | .CurrPic
        _m02 uint8_t                       field_pic_flag;                 //{ +0x0005    } | .field_pic_flag
        _m03 uint8_t                       b_dxva_func;                    //{ +0x0006    } | .bDXVA_Func
        _m04 uint8_t                       b_buf_type;                     //{ +0x0007    } | .bBufType
        _m05 uint8_t                       b_status;                       //{ +0x0008    } | .bStatus
        _m06 uint8_t                       b_reserved8_bits;               //{ +0x0009    } | .bReserved8Bits
        _m07 uint16_t                      w_num_mbs_affected;             //{ +0x000a    } | .wNumMbsAffected
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXVA_Status_H264.$", 0x0, false, 0x399bac4618947945 );                              
        SDK_FIXED_SIZE( status_h264_t, 0xc );                              
    };                                                                   
};
#include "magic/status_h264_t.end.hpp"
SDK_VERIFY( struct dxva::status_h264_t, 0xc );
