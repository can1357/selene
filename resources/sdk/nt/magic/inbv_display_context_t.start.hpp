#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INBV_DISPLAY_CONTEXT.FrameBufferValid", frame_buffer_valid, 0x0, 0x0, false, 0x779a61a4a5068b18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INBV_DISPLAY_CONTEXT.FrameBufferMapped", frame_buffer_mapped, 0x0, 0x0, false, 0x9f123e6f1d45acdb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INBV_DISPLAY_CONTEXT.DisplayRotation", display_rotation, 0x0, 0x0, false, 0x5d8058f9ff45cc05)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::inbv_mode_information_t), "_INBV_DISPLAY_CONTEXT.ModeInformation", mode_information, 0x0, 0x0, false, 0x37577dbcc8b824c5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_INBV_DISPLAY_CONTEXT.ShadowBuffer", shadow_buffer, 0x0, 0x0, false, 0x9a2ce43baf1b4055)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_INBV_DISPLAY_CONTEXT.VideoMemory.FrameBuffer", frame_buffer, 0x0, 0x0, false, 0x2a53ab331594ea9a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::inbv_graphics_rectangle_t*, struct nt::inbv_offset_t*, uint8_t)>*), "_INBV_DISPLAY_CONTEXT.VideoMemory.BltRoutine", blt_routine, 0x0, 0x0, false, 0x6f19587e2ef12ee6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_video_memory_t), "_INBV_DISPLAY_CONTEXT.VideoMemory", video_memory, 0x0, 0x0, false, 0xacb44fb6f4af55b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif