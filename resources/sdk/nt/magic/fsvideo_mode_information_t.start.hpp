#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::mode_information_t), "_FSVIDEO_MODE_INFORMATION.VideoMode", video_mode, 0x0, 0x80, true, 0x4b14e08c71177a75)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::memory_information_t), "_FSVIDEO_MODE_INFORMATION.VideoMemory", video_memory, 0x280, 0x0, true, 0xdf1ad11adc6d020c)
#else
#define _m00
#define _m01
#endif