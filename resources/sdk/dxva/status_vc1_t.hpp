#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/status_vc1_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Status_VC1]
    // => WDK 10 (NV)
    //
    struct status_vc1_t                             
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint16_t status_report_feedback_number;  //{ +0x0000    } | .StatusReportFeedbackNumber
        _m01 uint16_t w_decoded_picture_index;        //{ +0x0002    } | .wDecodedPictureIndex
        _m02 uint16_t w_deblocked_picture_index;      //{ +0x0004    } | .wDeblockedPictureIndex
        _m03 uint8_t  b_pic_structure;                //{ +0x0006    } | .bPicStructure
        _m04 uint8_t  b_buf_type;                     //{ +0x0007    } | .bBufType
        _m05 uint8_t  b_status;                       //{ +0x0008    } | .bStatus
        _m06 uint8_t  b_reserved8_bits;               //{ +0x0009    } | .bReserved8Bits
        _m07 uint16_t w_num_mbs_affected;             //{ +0x000a    } | .wNumMbsAffected
                                                    
        SDK_NONVOL_PROPERTIES( "_DXVA_Status_VC1.$", 0x0, false, 0x5ecdf1161e07520a );                              
        SDK_FIXED_SIZE( status_vc1_t, 0xc );                              
    };                                              
};
#include "magic/status_vc1_t.end.hpp"
SDK_VERIFY( struct dxva::status_vc1_t, 0xc );
