#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_MULTISAMPLINGMETHOD.NumSamples", num_samples, 0x0, 0x20, true, 0x9f772a19c46695ce)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_MULTISAMPLINGMETHOD.NumQualityLevels", num_quality_levels, 0x20, 0x20, true, 0xed868b8a454cc3f3)
#else
#define _m00
#define _m01
#endif