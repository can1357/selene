#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.Version", version, 0x0, 0x20, true, 0x51222dac00862686)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.Length", length, 0x20, 0x20, true, 0x63222348c1ee0c7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.Id", id, 0x40, 0x20, true, 0x9e342e62e89939c5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.Attributes", attributes, 0x60, 0x20, true, 0xb7eab98e33264c92)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.FriendlyNameOffset", friendly_name_offset, 0x80, 0x20, true, 0xe210cec97771e6c2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.BootFilePathOffset", boot_file_path_offset, 0xa0, 0x20, true, 0x2dc5e05cdef48c9d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_ENTRY.OsOptionsLength", os_options_length, 0xc0, 0x20, true, 0xbe5a91a724cd59cf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_BOOT_ENTRY.OsOptions", os_options, 0xe0, 0x8, true, 0x7e4d3efb679f6089)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif