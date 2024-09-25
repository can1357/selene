#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_QUERYADAPTERINFOFLAGS.VirtualMachineData", virtual_machine_data, 0x0, 0x1, true, 0xdf7ebf3c2a288839, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_QUERYADAPTERINFOFLAGS.SecureVirtualMachine", secure_virtual_machine, 0x1, 0x1, true, 0x706361fd2ace191b, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_QUERYADAPTERINFOFLAGS.Value", value, 0x0, 0x20, true, 0x14ef4803e2d94867)
#else
#define _m00
#define _m01
#define _m02
#endif