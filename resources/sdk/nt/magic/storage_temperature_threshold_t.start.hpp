#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_TEMPERATURE_THRESHOLD.Version", version, 0x0, 0x20, true, 0xa771a00f28bcfc30)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_TEMPERATURE_THRESHOLD.Size", size, 0x20, 0x20, true, 0xb13c7e07f41e6754)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_TEMPERATURE_THRESHOLD.Flags", flags, 0x40, 0x10, true, 0x8ad8a47d70f1c1a9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_TEMPERATURE_THRESHOLD.Index", index, 0x50, 0x10, true, 0x8939b72677b98a9b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_STORAGE_TEMPERATURE_THRESHOLD.Threshold", threshold, 0x60, 0x10, true, 0x170d25ecaa2c9451)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_TEMPERATURE_THRESHOLD.OverThreshold", over_threshold, 0x70, 0x8, true, 0xf4df8b214f947438)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif