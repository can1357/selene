#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.TimeTrackingHandle", time_tracking_handle, 0x0, 0x40, true, 0x150eef8fcf8dcbae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.InputFrameNumber", input_frame_number, 0x40, 0x20, true, 0xb69abb743adf741c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.InputMicroFrameNumber", input_micro_frame_number, 0x60, 0x20, true, 0xc5f5729861294c2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.QueryPerformanceCounterAtInputFrameOrMicroFrame", query_performance_counter_at_input_frame_or_micro_frame, 0x80, 0x40, true, 0x4e45b0c2ded5db6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.QueryPerformanceCounterFrequency", query_performance_counter_frequency, 0xc0, 0x40, true, 0xcf4b700c68aef5bb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.PredictedAccuracyInMicroSeconds", predicted_accuracy_in_micro_seconds, 0x100, 0x20, true, 0x62a07eb7a6f4e045)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.CurrentGenerationID", current_generation_id, 0x120, 0x20, true, 0x7debc9cdf1330657)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.CurrentQueryPerformanceCounter", current_query_performance_counter, 0x140, 0x40, true, 0x6a386e69a3c46c06)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.CurrentHardwareFrameNumber", current_hardware_frame_number, 0x180, 0x20, true, 0x7f03a5ea74a57dcf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.CurrentHardwareMicroFrameNumber", current_hardware_micro_frame_number, 0x1a0, 0x20, true, 0xa8c400c69d90f2ff)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION.CurrentUSBFrameNumber", current_usb_frame_number, 0x1c0, 0x20, true, 0x58ab778256139268)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif