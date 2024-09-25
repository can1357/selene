#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_KDEVICE_QUEUE.Type", type, 0x0, 0x10, true, 0x7783ec71e9b9fcf6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_KDEVICE_QUEUE.Size", size, 0x10, 0x10, true, 0xadd36dbe505cbff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KDEVICE_QUEUE.DeviceListHead", device_list_head, 0x40, 0x80, true, 0xe3c81e4ab7429568)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KDEVICE_QUEUE.Lock", lock, 0xc0, 0x40, true, 0xfff47cf2eeb33e98)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KDEVICE_QUEUE.Busy", busy, 0x100, 0x8, true, 0xddb62c1944ec7786)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int56_t), "_KDEVICE_QUEUE.Hint", hint, 0x108, 0x38, true, 0x243c61f06c3fc963, 56, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif