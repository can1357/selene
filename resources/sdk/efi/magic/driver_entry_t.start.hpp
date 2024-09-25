#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY.Version", version, 0x0, 0x20, true, 0xb9feb5c6b192cdb0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY.Length", length, 0x20, 0x20, true, 0xb2fa75cceac921ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY.Id", id, 0x40, 0x20, true, 0xb0d58a5eeb1c2942)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY.FriendlyNameOffset", friendly_name_offset, 0x60, 0x20, true, 0xedcac1ca3afb18ad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EFI_DRIVER_ENTRY.DriverFilePathOffset", driver_file_path_offset, 0x80, 0x20, true, 0x96b1af169e9134d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif