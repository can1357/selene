#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x2d41f3527ff88909)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.TransferLength", transfer_length, 0x0, 0x0, false, 0xd8272bf38872c4aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.HeaderLength", header_length, 0x0, 0x0, false, 0x218bbcef24f76ee4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.TrailerLength", trailer_length, 0x0, 0x0, false, 0x60eda658693e31f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.NumPendingReads", num_pending_reads, 0x0, 0x0, false, 0xfc088d2c3033e87c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_v1_13_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.BufferAttributes", buffer_attributes, 0x0, 0x0, false, 0xe019b53b16a27e0d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x0, 0x0, false, 0xdfa7ac942c9974e1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x0, 0x0, false, 0x8ab501f8a4110d41)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_13.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x0, 0x0, false, 0x44d662ff4a764913)
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