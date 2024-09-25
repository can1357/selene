#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_WOW64_ARCHITECTURE_INFORMATION.Machine", machine, 0x0, 0x10, true, 0xc50f8c0beaa1e922, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_ARCHITECTURE_INFORMATION.KernelMode", kernel_mode, 0x10, 0x1, true, 0x4e174574ec91d93c, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_ARCHITECTURE_INFORMATION.UserMode", user_mode, 0x11, 0x1, true, 0x3898e55e3c60251c, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_ARCHITECTURE_INFORMATION.Native", native, 0x12, 0x1, true, 0xc9c7333b817232a4, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WOW64_ARCHITECTURE_INFORMATION.Process", process, 0x13, 0x1, true, 0x6bd86289579899e9, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_WOW64_ARCHITECTURE_INFORMATION.ReservedZero0", reserved_zero0, 0x14, 0xc, true, 0x8080dae9a11d4bf9, 12, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif