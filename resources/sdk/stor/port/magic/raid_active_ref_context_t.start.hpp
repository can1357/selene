#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ACTIVE_REF_CONTEXT.UnitReference", unit_reference, 0x0, 0x1, true, 0x359f4e7e17e66934, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ACTIVE_REF_CONTEXT.AdapterReference", adapter_reference, 0x1, 0x1, true, 0xdc978f6fd2657629, 1, uint8_t)
#else
#define _m00
#define _m01
#endif