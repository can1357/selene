#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_TUNING_PARAMETERS.CommittThresholdShift", committ_threshold_shift, 0x0, 0x20, true, 0x31548e246fd6f276)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_TUNING_PARAMETERS.MaxPreCommittThreshold", max_pre_committ_threshold, 0x40, 0x40, true, 0x7144bbc1cd268706)
#else
#define _m00
#define _m01
#endif