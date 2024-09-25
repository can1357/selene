#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x82b1401b0d037891)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.TransferLength", transfer_length, 0x0, 0x0, false, 0xe2604e948503ce04)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.HeaderLength", header_length, 0x0, 0x0, false, 0x60b5b918cc710968)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.TrailerLength", trailer_length, 0x0, 0x0, false, 0x74e34e8a613cbb53)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.NumPendingReads", num_pending_reads, 0x0, 0x0, false, 0x3ac55619fc8a6c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_v1_17_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.BufferAttributes", buffer_attributes, 0x0, 0x0, false, 0xa5a0dfdd494b614f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x0, 0x0, false, 0x796743ffd2bfe39)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x0, 0x0, false, 0xc78278ec8b8f57f4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_17.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x0, 0x0, false, 0x5f9e2a1e38dad251)
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