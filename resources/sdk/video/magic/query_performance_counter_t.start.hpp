#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_QUERY_PERFORMANCE_COUNTER.BufferSize", buffer_size, 0x0, 0x20, true, 0x4161d4cba32f005)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::performance_counter_t*), "_VIDEO_QUERY_PERFORMANCE_COUNTER.Buffer", buffer, 0x40, 0x40, true, 0xd9594cca9beffbfe)
#else
#define _m00
#define _m01
#endif