#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_FEATURE.Offset", offset, 0x0, 0x20, true, 0x2084e08fc2c1bfc2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_FEATURE.Size", size, 0x20, 0x20, true, 0x42ebe18c1e7eb19a)
#else
#define _m00
#define _m01
#endif