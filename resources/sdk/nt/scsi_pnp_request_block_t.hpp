#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scsi_pnp_request_block_t.start.hpp"
namespace nt
{
    struct scsi_request_block_t;

    // [struct _SCSI_PNP_REQUEST_BLOCK]
    // => WDK 10 (NV)
    //
    struct scsi_pnp_request_block_t                                     
    {                                                                   
        enum class u0_pn_p_action_t : int32_t                           
        {                                                               
            start_device =                 0x0,                           // WDK 10
            remove_device =                0x2,                           // WDK 10
            stop_device =                  0x4,                           // WDK 10
            query_capabilities =           0x9,                           // WDK 10
            query_resource_requirements =  0xb,                           // WDK 10
            filter_resource_requirements = 0xd,                           // WDK 10
            surprise_removal =             0x17,                          // WDK 10
        };                                                              
                                                                        
        // WDK 10                                                       
        //                                                              
        _m00 uint16_t                              length;                //{ +0x0000    } | .Length
        _m01 uint8_t                               function;              //{ +0x0002    } | .Function
        _m02 uint8_t                               srb_status;            //{ +0x0003    } | .SrbStatus
        _m03 uint8_t                               pn_p_sub_function;     //{ +0x0004    } | .PnPSubFunction
        _m04 uint8_t                               path_id;               //{ +0x0005    } | .PathId
        _m05 uint8_t                               target_id;             //{ +0x0006    } | .TargetId
        _m06 uint8_t                               lun;                   //{ +0x0007    } | .Lun
        _m07 u0_pn_p_action_t                      pn_p_action;           //{ +0x0008    } | .PnPAction
        _m08 uint32_t                              srb_flags;             //{ +0x000c    } | .SrbFlags
        _m09 uint32_t                              data_transfer_length;  //{ +0x0010    } | .DataTransferLength
        _m10 uint32_t                              time_out_value;        //{ +0x0014    } | .TimeOutValue
        _m11 void*                                 data_buffer;           //{ +0x0018    } | .DataBuffer
        _m12 void*                                 sense_info_buffer;     //{ +0x0020    } | .SenseInfoBuffer
        _m13 struct nt::scsi_request_block_t*      next_srb;              //{ +0x0028    } | .NextSrb
        _m14 void*                                 original_request;      //{ +0x0030    } | .OriginalRequest
        _m15 void*                                 srb_extension;         //{ +0x0038    } | .SrbExtension
        _m16 uint32_t                              srb_pn_p_flags;        //{ +0x0040    } | .SrbPnPFlags
                                                                        
        SDK_NONVOL_PROPERTIES( "_SCSI_PNP_REQUEST_BLOCK.$", 0x0, false, 0x3fcebb7271473385 );                     
        SDK_FIXED_SIZE( scsi_pnp_request_block_t, 0x58 );                     
    };                                                                  
};
#include "magic/scsi_pnp_request_block_t.end.hpp"
SDK_VERIFY( struct nt::scsi_pnp_request_block_t, 0x58 );
