#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUPCAPS.Caps.VirtualMachineHibernation", virtual_machine_hibernation, 0x0, 0x1, true, 0xb6726677fc09bea1, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUPCAPS.Caps.HotDriverUpdate", hot_driver_update, 0x1, 0x1, true, 0xb0bc98cc27c1a67c, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUPCAPS.Caps.Value", value, 0x0, 0x20, true, 0xf3bb7bc62d1a116a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_caps_t), "_DXGK_GPUPCAPS.Caps", caps, 0x0, 0x20, true, 0x21c8034d87d98bf1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif