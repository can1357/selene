#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_VIDEO_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0xfd2c6595212acc97)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_VIDEO_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0xb8a989c63245ca22)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_VIDEO_DEVICE_DATA.VideoClock", video_clock, 0x20, 0x20, true, 0x54e03a362b83ae2f)
#else
#define _m00
#define _m01
#define _m02
#endif