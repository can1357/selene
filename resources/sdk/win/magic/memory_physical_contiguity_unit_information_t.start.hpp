#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION.State", state, 0x0, 0x2, true, 0xf08af60438a3ea0c, 2, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION.AllInformation", all_information, 0x0, 0x20, true, 0x364b8481fb13462)
#else
#define _m00
#define _m01
#endif