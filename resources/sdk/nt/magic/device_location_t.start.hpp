#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Socket", socket, 0x0, 0x20, true, 0x135fb405a8d7129a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Slot", slot, 0x20, 0x20, true, 0xaa8834fba4af65cd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Adapter", adapter, 0x40, 0x20, true, 0x4a0b63ae3e81c612)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Port", port, 0x60, 0x20, true, 0x13b34c28f4e25eea)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Channel", channel, 0x80, 0x20, true, 0x1a8a705ac964e258)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Device", device, 0xa0, 0x20, true, 0x2fce30494569fc66)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Target", target, 0x80, 0x20, true, 0xb68a090d783854f5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_LOCATION.Lun", lun, 0xa0, 0x20, true, 0xe53f121f35ffd71b)
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