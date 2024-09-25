#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x472e5955ee02cf83)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.TransferLength", transfer_length, 0x0, 0x0, false, 0xd667060649e00a7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.HeaderLength", header_length, 0x0, 0x0, false, 0x6837751e182c25a5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.TrailerLength", trailer_length, 0x0, 0x0, false, 0xf7ef58bfdc7010f7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.NumPendingReads", num_pending_reads, 0x0, 0x0, false, 0x6ba1909db5dc649c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_v1_1_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.BufferAttributes", buffer_attributes, 0x0, 0x0, false, 0x9214f745ec81cb9a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x0, 0x0, false, 0x193351a29b61324e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x0, 0x0, false, 0x7cb9d2cc40256ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG_V1_1.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x0, 0x0, false, 0xd20332ac82a3d5fc)
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