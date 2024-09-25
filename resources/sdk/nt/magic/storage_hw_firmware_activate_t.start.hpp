#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_ACTIVATE.Version", version, 0x0, 0x20, true, 0x7ff8e52b047568fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_ACTIVATE.Size", size, 0x20, 0x20, true, 0x6176dcd2fd9616d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HW_FIRMWARE_ACTIVATE.Flags", flags, 0x40, 0x20, true, 0x9ccf3bb9c877cb1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HW_FIRMWARE_ACTIVATE.Slot", slot, 0x60, 0x8, true, 0x1cd916116b05dc6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif