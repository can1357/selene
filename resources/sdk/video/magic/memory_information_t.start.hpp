#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_MEMORY_INFORMATION.VideoRamBase", video_ram_base, 0x0, 0x40, true, 0x2e6dd88c480659b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MEMORY_INFORMATION.VideoRamLength", video_ram_length, 0x40, 0x20, true, 0xaa7dcde60d932f1c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_MEMORY_INFORMATION.FrameBufferBase", frame_buffer_base, 0x80, 0x40, true, 0xb63b1b5db6eeae48)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_MEMORY_INFORMATION.FrameBufferLength", frame_buffer_length, 0xc0, 0x20, true, 0xfce16fa0658fbd27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif