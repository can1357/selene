#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint56_t), "_WHEA_PCIXBUS_COMMAND.Command", command, 0x0, 0x38, true, 0xd4008dd61e4374b9, 56, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_COMMAND.PCIXCommand", pcix_command, 0x38, 0x1, true, 0xb9228e50577a4169, 1, uint64_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_COMMAND.AsULONGLONG", as_ulonglong, 0x0, 0x40, true, 0xc4f8a2791d54c02)
#else
#define _m00
#define _m01
#define _m02
#endif