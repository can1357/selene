#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "_SMBIOS3_TABLE_HEADER.Signature", signature, 0x0, 0x28, true, 0x5ee6a4929b142cd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.Checksum", checksum, 0x28, 0x8, true, 0x662320711bc1474e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.Length", length, 0x30, 0x8, true, 0x7289d1cafe8e3325)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.MajorVersion", major_version, 0x38, 0x8, true, 0x2e1acf41661123da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.MinorVersion", minor_version, 0x40, 0x8, true, 0x53b55f0782f4a1a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.Docrev", docrev, 0x48, 0x8, true, 0xda9231f736a27774)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMBIOS3_TABLE_HEADER.EntryPointRevision", entry_point_revision, 0x50, 0x8, true, 0x889c69475dfc336b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SMBIOS3_TABLE_HEADER.StructureTableMaximumSize", structure_table_maximum_size, 0x60, 0x20, true, 0x6556063302ef69c9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SMBIOS3_TABLE_HEADER.StructureTableAddress", structure_table_address, 0x80, 0x40, true, 0xccffdc4ca599ed02)
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
#endif