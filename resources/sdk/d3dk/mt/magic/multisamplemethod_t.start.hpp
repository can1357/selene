#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTISAMPLEMETHOD.NumSamples", num_samples, 0x0, 0x20, true, 0xc06a34c381bf139f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTISAMPLEMETHOD.NumQualityLevels", num_quality_levels, 0x20, 0x20, true, 0xb9554e79afa5afa2)
#else
#define _m00
#define _m01
#endif