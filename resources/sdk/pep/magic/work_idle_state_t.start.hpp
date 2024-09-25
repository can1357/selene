#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_IDLE_STATE.DeviceHandle", device_handle, 0x0, 0x40, true, 0x8ee878c4819b83bf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_IDLE_STATE.Component", component, 0x40, 0x20, true, 0x9745245e4e862393)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_IDLE_STATE.State", state, 0x60, 0x20, true, 0x18e3b5d730a84b57)
#else
#define _m00
#define _m01
#define _m02
#endif