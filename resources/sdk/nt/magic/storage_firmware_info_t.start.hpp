#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO.Version", version, 0x0, 0x20, true, 0xa9bdff36fe936873)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO.Size", size, 0x20, 0x20, true, 0x3b5091676619d910)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO.UpgradeSupport", upgrade_support, 0x40, 0x8, true, 0x8e5d1f77a77bd247)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO.SlotCount", slot_count, 0x48, 0x8, true, 0xfc0cee8586356c05)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO.ActiveSlot", active_slot, 0x50, 0x8, true, 0x224c3aa45adac490)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO.PendingActivateSlot", pending_activate_slot, 0x58, 0x8, true, 0x79a17d0873f0bab8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_firmware_slot_info_t>), "_STORAGE_FIRMWARE_INFO.Slot", slot, 0x80, 0x0, true, 0x1967238d5aaeb5b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif