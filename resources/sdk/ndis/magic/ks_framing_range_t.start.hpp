#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_RANGE.MinFrameSize", min_frame_size, 0x0, 0x0, false, 0x5e932c0998750a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_RANGE.MaxFrameSize", max_frame_size, 0x0, 0x0, false, 0x2f6f37916d6ae9a6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_RANGE.Stepping", stepping, 0x0, 0x0, false, 0x5b9b05b3b53160e9)
#else
#define _m00
#define _m01
#define _m02
#endif