#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_DEVICE_SESSION_STATUS.bEnable", b_enable, 0x0, 0x20, true, 0x13ffc754583c96b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_DEVICE_SESSION_STATUS.bSuccess", b_success, 0x20, 0x20, true, 0x57fbcb0c8edd75de)
#else
#define _m00
#define _m01
#endif