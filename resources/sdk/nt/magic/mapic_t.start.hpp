#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::description_header_t), "_MAPIC.Header", header, 0x0, 0x20, true, 0x912ae11df494feb8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAPIC.LocalAPICAddress", local_apic_address, 0x120, 0x20, true, 0xf9eedf08e927a382)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAPIC.Flags", flags, 0x140, 0x20, true, 0xacfa671a5e7c8800)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_MAPIC.APICTables", apic_tables, 0x160, 0x20, true, 0xef53a0d6d20f3022)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif