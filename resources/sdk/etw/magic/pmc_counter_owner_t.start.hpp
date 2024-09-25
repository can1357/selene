#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etw::pmc_counter_owner_type_t), "_ETW_PMC_COUNTER_OWNER.OwnerType", owner_type, 0x0, 0x0, false, 0x230e95ad33d78f52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PMC_COUNTER_OWNER.ProfileSource", profile_source, 0x0, 0x0, false, 0x97df594bd1a9d95d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PMC_COUNTER_OWNER.OwnerTag", owner_tag, 0x0, 0x0, false, 0xf99d08f203eb6b1e)
#else
#define _m00
#define _m01
#define _m02
#endif