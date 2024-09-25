#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.ExecuteDisable", execute_disable, 0x0, 0x1, true, 0x5ba88987ac9f1bec, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.ExecuteEnable", execute_enable, 0x1, 0x1, true, 0x68a3f795dab4348e, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.DisableThunkEmulation", disable_thunk_emulation, 0x2, 0x1, true, 0xd4617008ba29be4f, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.Permanent", permanent, 0x3, 0x1, true, 0xa1419d58ff48e78c, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.ExecuteDispatchEnable", execute_dispatch_enable, 0x4, 0x1, true, 0xb58970b053f96ffa, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.ImageDispatchEnable", image_dispatch_enable, 0x5, 0x1, true, 0x42af1b2997c8b8bd, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KEXECUTE_OPTIONS.DisableExceptionChainValidation", disable_exception_chain_validation, 0x6, 0x1, true, 0xc36fcab9d906b01d, 1, uint8_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KEXECUTE_OPTIONS.ExecuteOptions", execute_options, 0x0, 0x8, true, 0x3c33901d1ddc071b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KEXECUTE_OPTIONS.ExecuteOptionsNV", execute_options_nv, 0x0, 0x8, true, 0x19bde13443fd91fc)
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