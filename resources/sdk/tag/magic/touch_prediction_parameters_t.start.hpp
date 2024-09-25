#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTouchPredictionParameters.cbSize", cb_size, 0x0, 0x20, true, 0xd15996616ecc90ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTouchPredictionParameters.dwLatency", dw_latency, 0x20, 0x20, true, 0x4f6be5e3b3e14ada)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTouchPredictionParameters.dwSampleTime", dw_sample_time, 0x40, 0x20, true, 0xf71dbf105a1520ea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTouchPredictionParameters.bUseHWTimeStamp", b_use_hw_time_stamp, 0x60, 0x20, true, 0xf1bd3874637f9a37)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif