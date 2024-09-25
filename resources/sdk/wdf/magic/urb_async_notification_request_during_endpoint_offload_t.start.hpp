#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD.Hdr", hdr, 0x0, 0xc0, true, 0x59c4c2bee3358fb8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0xd1b31a395074a33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(endpoint_offload_notification_event_type_t ), "_URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD.Event", event, 0x100, 0x20, true, 0x3b80486294caa3f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::endpoint_offload_response_event_type_t), "_URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD.Response", response, 0x120, 0x20, true, 0x11a725150d4b31ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif