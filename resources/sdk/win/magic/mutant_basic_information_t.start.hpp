#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MUTANT_BASIC_INFORMATION.CurrentCount", current_count, 0x0, 0x20, true, 0x4181b6b016528c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MUTANT_BASIC_INFORMATION.OwnedByCaller", owned_by_caller, 0x20, 0x8, true, 0x4a8d2707c3fa7f83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MUTANT_BASIC_INFORMATION.AbandonedState", abandoned_state, 0x28, 0x8, true, 0xaf01be3276915ac0)
#else
#define _m00
#define _m01
#define _m02
#endif