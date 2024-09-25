#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_DEVICE_IDLE.DeviceHandle", device_handle, 0x0, 0x40, true, 0x4525b91eb7df703d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_WORK_DEVICE_IDLE.IgnoreIdleTimeout", ignore_idle_timeout, 0x40, 0x8, true, 0xd2156eb3ca789fb)
#else
#define _m00
#define _m01
#endif