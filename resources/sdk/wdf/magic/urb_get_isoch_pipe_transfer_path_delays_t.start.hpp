#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS.Hdr", hdr, 0x0, 0xc0, true, 0xc9e1410212be1ac8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x1920c05a5062ccee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS.MaximumSendPathDelayInMilliSeconds", maximum_send_path_delay_in_milli_seconds, 0x100, 0x20, true, 0xb00d8b71e54e3a8a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS.MaximumCompletionPathDelayInMilliSeconds", maximum_completion_path_delay_in_milli_seconds, 0x120, 0x20, true, 0x56b2cb37b93c5bc9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif