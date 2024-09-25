#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERSISTENT_RESERVE_COMMAND.Version", version, 0x0, 0x20, true, 0xd4a5e2813172e40f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERSISTENT_RESERVE_COMMAND.Size", size, 0x20, 0x20, true, 0x500cf0e218513f08)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERSISTENT_RESERVE_COMMAND.PR_IN.ServiceAction", service_action, 0x0, 0x5, true, 0x5788dea4ab17af88, 5, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERSISTENT_RESERVE_COMMAND.PR_IN.AllocationLength", allocation_length, 0x10, 0x10, true, 0xa58c2ccb77196a09)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_pr_in_t), "_PERSISTENT_RESERVE_COMMAND.PR_IN", pr_in, 0x40, 0x20, true, 0x30d48dfe65c10f75)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERSISTENT_RESERVE_COMMAND.PR_OUT.ServiceAction", service_action, 0x0, 0x5, true, 0x2ea20c46e5ab97a8, 5, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERSISTENT_RESERVE_COMMAND.PR_OUT.Type", type, 0x8, 0x4, true, 0x81e999abd56cc29d, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERSISTENT_RESERVE_COMMAND.PR_OUT.Scope", scope, 0xc, 0x4, true, 0x89ac7d6a34e97e27, 4, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_PERSISTENT_RESERVE_COMMAND.PR_OUT.ParameterList", parameter_list, 0x10, 0x0, true, 0xc3642005e61e5256)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_pr_out_t), "_PERSISTENT_RESERVE_COMMAND.PR_OUT", pr_out, 0x40, 0x10, true, 0xd300bc944d5532f7)
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