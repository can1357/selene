#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_COMPLETE_PERF_STATE.DeviceHandle", device_handle, 0x0, 0x40, true, 0x29553121f3f2a7c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_WORK_COMPLETE_PERF_STATE.Component", component, 0x40, 0x20, true, 0x5855687909e18eaf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_WORK_COMPLETE_PERF_STATE.Succeeded", succeeded, 0x60, 0x8, true, 0xe9b1f193eed38573)
#else
#define _m00
#define _m01
#define _m02
#endif