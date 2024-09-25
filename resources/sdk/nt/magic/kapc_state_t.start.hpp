#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 2>), "_KAPC_STATE.ApcListHead", apc_list_head, 0x0, 0x0, true, 0xeb5090a674603cc7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kprocess_t*), "_KAPC_STATE.Process", process, 0x100, 0x40, true, 0x55a64ff9e05a8031)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC_STATE.InProgressFlags", in_progress_flags, 0x140, 0x8, true, 0x173124801ef2f9ff)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KAPC_STATE.KernelApcInProgress", kernel_apc_in_progress, 0x140, 0x1, true, 0x19e8f89623903b67, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KAPC_STATE.SpecialApcInProgress", special_apc_in_progress, 0x141, 0x1, true, 0x10dca3a8854452d0, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC_STATE.KernelApcPending", kernel_apc_pending, 0x148, 0x8, true, 0x83067fa067c2388e)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_KAPC_STATE.UserApcPending", user_apc_pending, 0x151, 0x1, true, 0xbfb8859f74eb9d0c, 0, uint8_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC_STATE.UserApcPendingAll", user_apc_pending_all, 0x150, 0x8, true, 0xc3ca991a62871a8a)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KAPC_STATE.SpecialUserApcPending", special_user_apc_pending, 0x150, 0x1, true, 0xb5a39ebfe8cf9613, 1, uint8_t)
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
#endif