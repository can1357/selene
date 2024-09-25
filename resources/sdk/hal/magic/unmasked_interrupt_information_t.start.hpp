#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Version", version, 0x0, 0x10, true, 0xc60acaad303fa216)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Size", size, 0x10, 0x10, true, 0xbc97009f3b2989c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union hal::unmasked_interrupt_flags_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Flags", flags, 0x20, 0x10, true, 0xe0281e27a09f1dfd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Mode", mode, 0x40, 0x20, true, 0x972b84d5fc0b29ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Polarity", polarity, 0x60, 0x20, true, 0xbfe4fb95d3b7d439)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.Gsiv", gsiv, 0x80, 0x20, true, 0x7b0d5fce952d397a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HAL_UNMASKED_INTERRUPT_INFORMATION.PinNumber", pin_number, 0xa0, 0x10, true, 0xd43b610a1dd626ac)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HAL_UNMASKED_INTERRUPT_INFORMATION.DeviceHandle", device_handle, 0xc0, 0x40, true, 0xc5097b0df31a2e50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif