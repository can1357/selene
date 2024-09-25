#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TRIAGE_POP_FX_DEVICE.Link", link, 0x0, 0x80, true, 0x475b2aebacfbdbb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_TRIAGE_POP_FX_DEVICE.Irp", irp, 0x80, 0x40, true, 0x4a417c81bc4fb378)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_pop_irp_data_t*), "_TRIAGE_POP_FX_DEVICE.IrpData", irp_data, 0xc0, 0x40, true, 0x39f09389b182865c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TRIAGE_POP_FX_DEVICE.Status", status, 0x100, 0x20, true, 0x7feb7d6c5b682e50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TRIAGE_POP_FX_DEVICE.PowerReqCall", power_req_call, 0x120, 0x20, true, 0x8492675aa7e7031d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_TRIAGE_POP_FX_DEVICE.PowerNotReqCall", power_not_req_call, 0x140, 0x20, true, 0x89d3b88f975f901f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::triage_device_node_t*), "_TRIAGE_POP_FX_DEVICE.DeviceNode", device_node, 0x180, 0x40, true, 0x7249f11410f1cc93)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif