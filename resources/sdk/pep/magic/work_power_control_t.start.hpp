#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_PEP_WORK_POWER_CONTROL.DeviceHandle", device_handle, 0x0, 0x40, true, 0x6bd1c2741bff5262)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_PEP_WORK_POWER_CONTROL.PowerControlCode", power_control_code, 0x40, 0x40, true, 0x3b2216dc3242428a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEP_WORK_POWER_CONTROL.RequestContext", request_context, 0x80, 0x40, true, 0xb97801e1802c3e4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEP_WORK_POWER_CONTROL.InBuffer", in_buffer, 0xc0, 0x40, true, 0xd466c812dbe73212)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_WORK_POWER_CONTROL.InBufferSize", in_buffer_size, 0x100, 0x40, true, 0x33e99b08f99da91c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PEP_WORK_POWER_CONTROL.OutBuffer", out_buffer, 0x140, 0x40, true, 0x32122f2a4a1b6f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PEP_WORK_POWER_CONTROL.OutBufferSize", out_buffer_size, 0x180, 0x40, true, 0x99f5e4d630187894)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif