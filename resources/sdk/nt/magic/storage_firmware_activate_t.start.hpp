#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_ACTIVATE.Version", version, 0x0, 0x20, true, 0x4f9b3c347709da6f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_FIRMWARE_ACTIVATE.Size", size, 0x20, 0x20, true, 0xa761d8fec00bc037)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_FIRMWARE_ACTIVATE.SlotToActivate", slot_to_activate, 0x40, 0x8, true, 0x6745a09a1a6760ff)
#else
#define _m00
#define _m01
#define _m02
#endif