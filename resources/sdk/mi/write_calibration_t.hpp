#pragma once
#include <sdkgen/support_library.hpp>
#include "write_types_t.hpp"

#include "magic/write_calibration_t.start.hpp"
namespace mi
{
    struct write_modes_t;

    // [struct _MI_WRITE_CALIBRATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_calibration_t                                       
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                           
        _m00 uint32_t                  maximum_number_processors;      //{ +0x0000    +0x0000    +0x0000    } | .MaximumNumberProcessors
        _m01 varuint_t                 optimal_write_type;             //{ +0x0004    +0x0004    +0x0004    } | .OptimalWriteType
        _m02 uint64_t                  per_processor_number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    } | .PerProcessorNumberOfBytes
        _m03 sdk::array<uint32_t, 2>   optimal_write_processors;       //{ +0x0010    +0x0010    +0x0010    } | .OptimalWriteProcessors
                                                                     
        // Windows 10 v2004, Windows 10 v20H2                              
        //                                                           
        _m04 struct mi::write_modes_t* raw_time_stamps;                //{ +0x0018    +0x0018    } | .RawTimeStamps
                                                                     
        // Windows 11                                                
        //                                                           
        _m05 uint8_t                   calibration_completed;          //{ +0x0005    } | .CalibrationCompleted
        _m06 sdk::array<uint8_t, 2>    calibration_final;              //{ +0x0006    } | .CalibrationFinal
        _m07 struct mi::write_modes_t* pure_zeroing;                   //{ +0x0018    } | .PureZeroing
                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_WRITE_CALIBRATION.$", 0x20, true, 0xc8982c3d090dbc78 );                              
        SDK_FIXED_SIZE( write_calibration_t, 0x20 );                              
    };                                                               
};
#include "magic/write_calibration_t.end.hpp"
SDK_VERIFY( struct mi::write_calibration_t, 0x20 );
