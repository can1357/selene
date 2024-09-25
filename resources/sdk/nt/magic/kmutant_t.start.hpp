#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KMUTANT.Header", header, 0x0, 0xc0, true, 0xf7902bd4265699f4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KMUTANT.MutantListEntry", mutant_list_entry, 0xc0, 0x80, true, 0x76dc47b9d1ac70be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KMUTANT.OwnerThread", owner_thread, 0x140, 0x40, true, 0xb9d28cf1f5b6a3f1)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KMUTANT.Abandoned", abandoned, 0x180, 0x1, true, 0xa5090d3093623301, 0, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KMUTANT.ApcDisable", apc_disable, 0x188, 0x8, true, 0x4b6dd905f295b6c2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KMUTANT.MutantFlags", mutant_flags, 0x180, 0x8, true, 0xacff3654c25dffc4)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KMUTANT.Abandoned2", abandoned2, 0x180, 0x1, true, 0x6d76eeea220c4564, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KMUTANT.AbEnabled", ab_enabled, 0x181, 0x1, true, 0x595964e32b4fd4dc, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif