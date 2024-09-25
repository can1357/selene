#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY_LIST.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x47a8c95cfdd7f231)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct efi::driver_entry_t), "_EFI_DRIVER_ENTRY_LIST.DriverEntry", driver_entry, 0x20, 0xa0, true, 0x2a25580475306ea0)
#else
#define _m00
#define _m01
#endif