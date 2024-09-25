#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIRTUALMACHINEDATAFLAGS.SecureVirtualMachine", secure_virtual_machine, 0x0, 0x1, true, 0xfafeb2b7e637333a, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALMACHINEDATAFLAGS.Value", value, 0x0, 0x20, true, 0x59fccaa12753b5a6)
#else
#define _m00
#define _m01
#endif