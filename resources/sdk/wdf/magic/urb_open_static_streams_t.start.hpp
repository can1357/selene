#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_OPEN_STATIC_STREAMS.Hdr", hdr, 0x0, 0xc0, true, 0x2eebb4da33723bf8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_OPEN_STATIC_STREAMS.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0xb828201d7949cad0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_OPEN_STATIC_STREAMS.NumberOfStreams", number_of_streams, 0x100, 0x20, true, 0x413b215d5abef365)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_OPEN_STATIC_STREAMS.StreamInfoVersion", stream_info_version, 0x120, 0x10, true, 0x9d12ded56049eaf7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_OPEN_STATIC_STREAMS.StreamInfoSize", stream_info_size, 0x130, 0x10, true, 0xa7726cbcb835d7fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_stream_information_t*), "_URB_OPEN_STATIC_STREAMS.Streams", streams, 0x140, 0x40, true, 0xac5fa28f0716dacf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif