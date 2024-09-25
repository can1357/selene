#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_COMPLETE_IDLE_STATE.DeviceHandle", device_handle, 0x0, 0x40, true, 0x18cbaddff283bdf9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_COMPLETE_IDLE_STATE.Component", component, 0x40, 0x20, true, 0xbe300d4d7fe283f9)
#else
#define _m00
#define _m01
#endif