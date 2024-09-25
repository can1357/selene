#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xcd150a9462aaac63)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.TransferLength", transfer_length, 0x0, 0x0, false, 0x1b7aed87b1e73a6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.HeaderLength", header_length, 0x0, 0x0, false, 0x50340b3753f2e0cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.TrailerLength", trailer_length, 0x0, 0x0, false, 0x30cc8a22c8c28579)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.NumPendingReads", num_pending_reads, 0x0, 0x0, false, 0x9f4fdab88b1a28ad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_v1_11_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.BufferAttributes", buffer_attributes, 0x0, 0x0, false, 0x27c90e0839a8e86a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x0, 0x0, false, 0x62bc0b35d87a0515)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x0, 0x0, false, 0x988e8ae19283e707)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_11.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x0, 0x0, false, 0x62dc78e086d1ac3c)
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