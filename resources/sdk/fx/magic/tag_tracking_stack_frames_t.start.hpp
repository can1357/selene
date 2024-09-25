#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxTagTrackingStackFrames.NumFrames", num_frames, 0x0, 0x10, true, 0x4ce17c71f5027802)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 16>), "FxTagTrackingStackFrames.Frames", frames, 0x40, 0x0, true, 0xf44282246d8193de)
#else
#define _m00
#define _m01
#endif