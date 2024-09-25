#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EMULATOR_ACCESS_ENTRY.BasePort", base_port, 0x0, 0x20, true, 0xdb607fbf03d59955)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EMULATOR_ACCESS_ENTRY.NumConsecutivePorts", num_consecutive_ports, 0x20, 0x20, true, 0xc4235efe7898ed50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::emulator_port_access_type_t), "_EMULATOR_ACCESS_ENTRY.AccessType", access_type, 0x40, 0x20, true, 0x4cb80a4c845543b4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EMULATOR_ACCESS_ENTRY.AccessMode", access_mode, 0x60, 0x8, true, 0x58b10008f43caa42)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EMULATOR_ACCESS_ENTRY.StringSupport", string_support, 0x68, 0x8, true, 0x91dc8995280dcf26)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_EMULATOR_ACCESS_ENTRY.Routine", routine, 0x80, 0x40, true, 0x40e906fa2d5c08cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif