#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOTDISK_INFORMATION_LITE.NumberEntries", number_entries, 0x0, 0x20, true, 0x6f4ed8f48de950f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::loader_partition_information_ex_t, 1>), "_BOOTDISK_INFORMATION_LITE.Entries", entries, 0x20, 0xe0, true, 0xdcf23445ad5cb54e)
#else
#define _m00
#define _m01
#endif