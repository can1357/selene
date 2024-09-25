#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_STREAM_INFORMATION.PipeHandle", pipe_handle, 0x0, 0x40, true, 0x9b0cd635f558acfb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_STREAM_INFORMATION.StreamID", stream_id, 0x40, 0x20, true, 0x3d62fa61c94e07fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_STREAM_INFORMATION.MaximumTransferSize", maximum_transfer_size, 0x60, 0x20, true, 0x6f15476ad9ad218b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_STREAM_INFORMATION.PipeFlags", pipe_flags, 0x80, 0x20, true, 0x41845e4bf80cd33e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif