#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_CONTINUOUS_READER_CONFIG.Size", size, 0x0, 0x20, true, 0x6a59d7ee700cee41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG.TransferLength", transfer_length, 0x40, 0x40, true, 0x9b394eac509a4e02)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG.HeaderLength", header_length, 0x80, 0x40, true, 0x46473361a9d40629)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WDF_USB_CONTINUOUS_READER_CONFIG.TrailerLength", trailer_length, 0xc0, 0x40, true, 0xde0406afc39e740f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_CONTINUOUS_READER_CONFIG.NumPendingReads", num_pending_reads, 0x100, 0x8, true, 0x89c78c2625432986)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t*), "_WDF_USB_CONTINUOUS_READER_CONFIG.BufferAttributes", buffer_attributes, 0x140, 0x40, true, 0xd8a345d27d01f5c6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG.EvtUsbTargetPipeReadComplete", evt_usb_target_pipe_read_complete, 0x180, 0x40, true, 0xa37b3342e9be50e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_USB_CONTINUOUS_READER_CONFIG.EvtUsbTargetPipeReadCompleteContext", evt_usb_target_pipe_read_complete_context, 0x1c0, 0x40, true, 0x3a8efcc4ddc875f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "_WDF_USB_CONTINUOUS_READER_CONFIG.EvtUsbTargetPipeReadersFailed", evt_usb_target_pipe_readers_failed, 0x200, 0x40, true, 0xe8900388dfbc212f)
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