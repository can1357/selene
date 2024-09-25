#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxObjectDebugLeakDetection.Enabled", enabled, 0x0, 0x8, true, 0x82792de1e6c2daa1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxObjectDebugLeakDetection.Limit", limit, 0x20, 0x20, true, 0xfce12da22f0754ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxObjectDebugLeakDetection.LimitScaled", limit_scaled, 0x40, 0x20, true, 0xda9b2ae36f79ec6f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxObjectDebugLeakDetection.ObjectCnt", object_cnt, 0x60, 0x20, true, 0xf3224aaa8c074ae5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxObjectDebugLeakDetection.DeviceCnt", device_cnt, 0x80, 0x20, true, 0x50bfb2e92c5dfbdd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif