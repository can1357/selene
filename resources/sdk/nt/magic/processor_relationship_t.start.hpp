#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_RELATIONSHIP.Flags", flags, 0x0, 0x8, true, 0x9d72a2b9a86b4cfc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_RELATIONSHIP.EfficiencyClass", efficiency_class, 0x8, 0x8, true, 0x34d707fb284eec5d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESSOR_RELATIONSHIP.GroupCount", group_count, 0xb0, 0x10, true, 0xa416ae54f3e5948a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::group_affinity_t, 1>), "_PROCESSOR_RELATIONSHIP.GroupMask", group_mask, 0xc0, 0x80, true, 0x994e959fc4cbef9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif