#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_COMMAND_STATUS.Command", command, 0x0, 0x10, true, 0x98f38b94754c35ad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_COMMAND_STATUS.Status", status, 0x10, 0x10, true, 0x4c78565a3e7e8f19)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIEXPRESS_COMMAND_STATUS.AsULONG", as_ulong, 0x0, 0x20, true, 0x214c50b8ba19fe3)
#else
#define _m00
#define _m01
#define _m02
#endif