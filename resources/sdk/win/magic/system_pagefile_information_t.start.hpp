#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x9720d974ecd746be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION.TotalSize", total_size, 0x20, 0x20, true, 0x3fde72d8e667bf2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION.TotalInUse", total_in_use, 0x40, 0x20, true, 0xaf5b9e20ab4709a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PAGEFILE_INFORMATION.PeakUsage", peak_usage, 0x60, 0x20, true, 0x81152eb771f9b9e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_PAGEFILE_INFORMATION.PageFileName", page_file_name, 0x80, 0x80, true, 0x46c3174323aab578)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif