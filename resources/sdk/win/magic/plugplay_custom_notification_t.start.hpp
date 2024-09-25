#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::plugplay_notify_hdr_t), "_PLUGPLAY_CUSTOM_NOTIFICATION.HeaderInfo", header_info, 0x0, 0xa0, true, 0xfc6e752ae6cc1e9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_CUSTOM_NOTIFICATION.FileObject", file_object, 0xc0, 0x40, true, 0x614ac2b9fad2ba72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PLUGPLAY_CUSTOM_NOTIFICATION.NameBufferOffset", name_buffer_offset, 0x100, 0x20, true, 0x51b1d3d74f639ec6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_PLUGPLAY_CUSTOM_NOTIFICATION.CustomDataBuffer", custom_data_buffer, 0x120, 0x8, true, 0xa4769368baea6276)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif