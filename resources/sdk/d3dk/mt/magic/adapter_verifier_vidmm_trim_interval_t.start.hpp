#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL.MinimumTrimInterval", minimum_trim_interval, 0x0, 0x40, true, 0xb771b49e6364612c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL.MaximumTrimInterval", maximum_trim_interval, 0x40, 0x40, true, 0x3bc1af8e56cabf72)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL.IdleTrimInterval", idle_trim_interval, 0x80, 0x40, true, 0x87bd876a239f5702)
#else
#define _m00
#define _m01
#define _m02
#endif