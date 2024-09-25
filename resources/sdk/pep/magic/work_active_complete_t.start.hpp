#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_ACTIVE_COMPLETE.DeviceHandle", device_handle, 0x0, 0x40, true, 0xc81e29effc174d43)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_ACTIVE_COMPLETE.Component", component, 0x40, 0x20, true, 0x7e6be2a03ce204a2)
#else
#define _m00
#define _m01
#endif