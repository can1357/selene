#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.Size", size, 0x0, 0x20, true, 0xfb1861821aaa2e18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.Initialized", initialized, 0x20, 0x8, true, 0x4c289ca38e750f9c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultProbability", fault_probability, 0x40, 0x0, true, 0xcc3807dda5082f48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultBreak", fault_break, 0x240, 0x0, true, 0x34bf2261e150206c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.TargetMaximumIndex", target_maximum_index, 0x440, 0x20, true, 0xc7d24c2b729ba584)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultTargetStart", fault_target_start, 0x480, 0x0, true, 0xeb7b1f82ddb4d262)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultTargetEnd", fault_target_end, 0x2480, 0x0, true, 0xc6f3178cbb003c65)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.ExclusionMaximumIndex", exclusion_maximum_index, 0x4480, 0x20, true, 0x803a028a1f53f637)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultExclusionStart", fault_exclusion_start, 0x44c0, 0x0, true, 0xd21ed8fa0dd14107)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_RTL_VERIFIER_FAULT_INJECTIONS_INFORMATION.FaultExclusionEnd", fault_exclusion_end, 0x64c0, 0x0, true, 0xf7074606629c577c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif