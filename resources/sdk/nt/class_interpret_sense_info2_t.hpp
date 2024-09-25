#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_interpret_sense_info2_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct srb_history_t;
    struct device_object_t;
    struct scsi_request_block_t;

    // [struct _CLASS_INTERPRET_SENSE_INFO2]
    // => WDK 10 (NV)
    //
    struct class_interpret_sense_info2_t                         
    {                                                            
        using pclass_compress_retry_history_data_t = sdk::function<void(struct nt::device_object_t*, struct nt::srb_history_t*)>*;              
        using pclass_interpret_sense_info_t =        sdk::function<uint8_t(struct nt::device_object_t*, struct nt::irp_t*, struct nt::scsi_request_block_t*, uint8_t, uint32_t, uint32_t, struct nt::srb_history_t*, int32_t*, int64_t*)>*;              
                                                                 
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                              size;           //{ +0x0000    } | .Size
        _m01 uint32_t                              history_count;  //{ +0x0004    } | .HistoryCount
        _m02 pclass_compress_retry_history_data_t  compress;       //{ +0x0008    } | .Compress
        _m03 pclass_interpret_sense_info_t         interpret;      //{ +0x0010    } | .Interpret
                                                                 
        SDK_NONVOL_PROPERTIES( "_CLASS_INTERPRET_SENSE_INFO2.$", 0x0, false, 0xdc1271e5ce68a93d );              
        SDK_FIXED_SIZE( class_interpret_sense_info2_t, 0x18 );              
    };                                                           
};
#include "magic/class_interpret_sense_info2_t.end.hpp"
SDK_VERIFY( struct nt::class_interpret_sense_info2_t, 0x18 );
