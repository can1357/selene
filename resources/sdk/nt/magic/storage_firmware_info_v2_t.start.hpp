#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO_V2.Version", version, 0x0, 0x20, true, 0xfd11d147ef4ecaa8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO_V2.Size", size, 0x20, 0x20, true, 0x894ed88b15de9444)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO_V2.UpgradeSupport", upgrade_support, 0x40, 0x8, true, 0xc04e52f98dd36b85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO_V2.SlotCount", slot_count, 0x48, 0x8, true, 0xf7ab32476fa68631)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO_V2.ActiveSlot", active_slot, 0x50, 0x8, true, 0xf99b679e82cb6fa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO_V2.PendingActivateSlot", pending_activate_slot, 0x58, 0x8, true, 0xb1b8834d3669af00)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_INFO_V2.FirmwareShared", firmware_shared, 0x60, 0x8, true, 0x233091779add40f5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO_V2.ImagePayloadAlignment", image_payload_alignment, 0x80, 0x20, true, 0x476f81da5cde3be9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_INFO_V2.ImagePayloadMaxSize", image_payload_max_size, 0xa0, 0x20, true, 0xeb34b7cc15a57c8b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_firmware_slot_info_v2_t>), "_STORAGE_FIRMWARE_INFO_V2.Slot", slot, 0xc0, 0x0, true, 0x9ae92cb3c8d09be9)
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
#endif