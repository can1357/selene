#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION64.MajorVersion", major_version, 0x0, 0x10, true, 0x583bb4fa2c6a7f0a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION64.MinorVersion", minor_version, 0x10, 0x10, true, 0xc4c4690a5e316f92)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.ProtocolVersion", protocol_version, 0x20, 0x8, true, 0x4c1800477c2223f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.KdSecondaryVersion", kd_secondary_version, 0x28, 0x8, true, 0xdc82f8ee47cce121)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION64.Flags", flags, 0x30, 0x10, true, 0xc2e60fca3304cc48)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION64.MachineType", machine_type, 0x40, 0x10, true, 0xca3e9bec6a472641)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.MaxPacketType", max_packet_type, 0x50, 0x8, true, 0x69a5aace1d1354c0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.MaxStateChange", max_state_change, 0x58, 0x8, true, 0xbd71b9a24def7cda)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.MaxManipulate", max_manipulate, 0x60, 0x8, true, 0xc34853c352d97254)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DBGKD_GET_VERSION64.Simulation", simulation, 0x68, 0x8, true, 0x3eddcb6f9b53e077)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_GET_VERSION64.KernBase", kern_base, 0x80, 0x40, true, 0xdc99782105c2a825)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_GET_VERSION64.PsLoadedModuleList", ps_loaded_module_list, 0xc0, 0x40, true, 0x1a8d92919ff0ed72)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_GET_VERSION64.DebuggerDataList", debugger_data_list, 0x100, 0x40, true, 0xed487f956710ea97)
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
#define _m09
#define _m10
#define _m11
#define _m12
#endif