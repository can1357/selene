#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/usb_frame_number_and_qpc_for_time_sync_information_t.start.hpp"
namespace wdf
{
    // [struct _USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usb_frame_number_and_qpc_for_time_sync_information_t               
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
        //                                                                    
        _m00 void*    time_tracking_handle;                                     //{ +0x0000    +0x0000    +0x0000    } | .TimeTrackingHandle
        _m01 uint32_t input_frame_number;                                       //{ +0x0008    +0x0008    +0x0008    } | .InputFrameNumber
        _m02 uint32_t input_micro_frame_number;                                 //{ +0x000c    +0x000c    +0x000c    } | .InputMicroFrameNumber
        _m03 int64_t  query_performance_counter_at_input_frame_or_micro_frame;  //{ +0x0010    +0x0010    +0x0010    } | .QueryPerformanceCounterAtInputFrameOrMicroFrame
        _m04 int64_t  query_performance_counter_frequency;                      //{ +0x0018    +0x0018    +0x0018    } | .QueryPerformanceCounterFrequency
        _m05 uint32_t predicted_accuracy_in_micro_seconds;                      //{ +0x0020    +0x0020    +0x0020    } | .PredictedAccuracyInMicroSeconds
        _m06 uint32_t current_generation_id;                                    //{ +0x0024    +0x0024    +0x0024    } | .CurrentGenerationID
        _m07 int64_t  current_query_performance_counter;                        //{ +0x0028    +0x0028    +0x0028    } | .CurrentQueryPerformanceCounter
        _m08 uint32_t current_hardware_frame_number;                            //{ +0x0030    +0x0030    +0x0030    } | .CurrentHardwareFrameNumber
        _m09 uint32_t current_hardware_micro_frame_number;                      //{ +0x0034    +0x0034    +0x0034    } | .CurrentHardwareMicroFrameNumber
        _m10 uint32_t current_usb_frame_number;                                 //{ +0x0038    +0x0038    +0x0038    } | .CurrentUSBFrameNumber
                                                                              
        SDK_MAGIC_PROPERTIES( "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.$", 0x3c, true, 0x38473e11b53a35b0 );                                                        
        SDK_FIXED_SIZE( usb_frame_number_and_qpc_for_time_sync_information_t, 0x3c );                                                        
    };                                                                        
};
#include "magic/usb_frame_number_and_qpc_for_time_sync_information_t.end.hpp"
SDK_VERIFY( struct wdf::usb_frame_number_and_qpc_for_time_sync_information_t, 0x3c );
