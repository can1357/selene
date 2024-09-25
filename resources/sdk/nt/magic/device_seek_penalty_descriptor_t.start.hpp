#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_SEEK_PENALTY_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x4e9267a937e1879c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_SEEK_PENALTY_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x30fbc3a8b241627c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SEEK_PENALTY_DESCRIPTOR.IncursSeekPenalty", incurs_seek_penalty, 0x40, 0x8, true, 0x47fb9cb4cf503406)
#else
#define _m00
#define _m01
#define _m02
#endif