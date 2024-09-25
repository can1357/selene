#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x83f8fa55ce400700)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.TransferLength", transfer_length, 0x0, 0x0, false, 0xd87a67f24123e93)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.HeaderLength", header_length, 0x0, 0x0, false, 0x41d2fe3469565c71)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.TrailerLength", trailer_length, 0x0, 0x0, false, 0xb5e214c394942435)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.NumPendingReads", num_pending_reads, 0x0, 0x0, false, 0x1f4c58bc55e68045)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_v1_15_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.BufferAttributes", buffer_attributes, 0x0, 0x0, false, 0xce89b95e3f2f808d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x0, 0x0, false, 0xa8e671cac1985a7f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x0, 0x0, false, 0xa46f4752a9fabc2e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_15.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x0, 0x0, false, 0x64cf51968e81c064)
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
#endif