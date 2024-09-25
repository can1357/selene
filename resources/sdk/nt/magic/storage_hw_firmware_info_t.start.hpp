#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO.Version", version, 0x0, 0x20, true, 0x947a892f349aed81)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO.Size", size, 0x20, 0x20, true, 0x662d58ec85ec3f00)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STORAGE_HW_FIRMWARE_INFO.SupportUpgrade", support_upgrade, 0x40, 0x1, true, 0xc836ce00762aaf87, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_INFO.SlotCount", slot_count, 0x48, 0x8, true, 0x704588c7c7621278)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_INFO.ActiveSlot", active_slot, 0x50, 0x8, true, 0xa07626eeace48333)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_INFO.PendingActivateSlot", pending_activate_slot, 0x58, 0x8, true, 0xc960a46a3ee6c4ef)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_INFO.FirmwareShared", firmware_shared, 0x60, 0x8, true, 0xb2471b8e174d885d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO.ImagePayloadAlignment", image_payload_alignment, 0x80, 0x20, true, 0xd789b8d7bb837d11)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_INFO.ImagePayloadMaxSize", image_payload_max_size, 0xa0, 0x20, true, 0x3e003be8c3e77f5e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_hw_firmware_slot_info_t, 1>), "_STORAGE_HW_FIRMWARE_INFO.Slot", slot, 0xc0, 0x0, true, 0x66790efbe3812f3e)
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