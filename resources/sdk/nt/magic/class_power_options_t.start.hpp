#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_POWER_OPTIONS.PowerDown", power_down, 0x0, 0x1, true, 0x3852c3766f4fcc7a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_POWER_OPTIONS.LockQueue", lock_queue, 0x1, 0x1, true, 0x7b7b461a0c6f3aea, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_POWER_OPTIONS.HandleSpinDown", handle_spin_down, 0x2, 0x1, true, 0x875e1ab9cbc1f236, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_POWER_OPTIONS.HandleSpinUp", handle_spin_up, 0x3, 0x1, true, 0x5271c0842b205a91, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif