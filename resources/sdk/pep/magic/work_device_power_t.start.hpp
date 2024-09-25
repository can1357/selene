#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_DEVICE_POWER.DeviceHandle", device_handle, 0x0, 0x40, true, 0xed19959060ba78eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_WORK_DEVICE_POWER.PowerRequired", power_required, 0x40, 0x8, true, 0x6b6bac85b02947f0)
#else
#define _m00
#define _m01
#endif