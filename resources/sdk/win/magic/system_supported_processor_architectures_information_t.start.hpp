#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.Machine", machine, 0x0, 0x0, false, 0xda8cedbdf2572f53, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.KernelMode", kernel_mode, 0x0, 0x0, false, 0x8cfc123e953e7baf, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.UserMode", user_mode, 0x0, 0x0, false, 0x778c0e741469df93, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.Native", native, 0x0, 0x0, false, 0x722ddc5cd46b4272, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.Process", process, 0x0, 0x0, false, 0xab7fcbb613d17d01, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.WoW64Container", wo_w64_container, 0x0, 0x0, false, 0x5d78568a029cca54, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_SYSTEM_SUPPORTED_PROCESSOR_ARCHITECTURES_INFORMATION.ReservedZero0", reserved_zero0, 0x0, 0x0, false, 0xab4b62bc1737f0fe, 11, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif