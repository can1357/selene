#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_OPTIONS.Version", version, 0x0, 0x20, true, 0x88bd573dafc54be3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_OPTIONS.Length", length, 0x20, 0x20, true, 0xde790e9b7724dfc1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_OPTIONS.Timeout", timeout, 0x40, 0x20, true, 0x698e260ec9160d18)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_OPTIONS.CurrentBootEntryId", current_boot_entry_id, 0x60, 0x20, true, 0xd9fd05ea801309f2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_OPTIONS.NextBootEntryId", next_boot_entry_id, 0x80, 0x20, true, 0xc62d242da6d86cf0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_BOOT_OPTIONS.HeadlessRedirection", headless_redirection, 0xa0, 0x10, true, 0x3ecb2e665aa8140a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif