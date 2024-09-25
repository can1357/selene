#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_IO_DRIVER_CREATE_CONTEXT.Size", size, 0x0, 0x10, true, 0xab0d3e00add2323a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ecp_list_t*), "_IO_DRIVER_CREATE_CONTEXT.ExtraCreateParameter", extra_create_parameter, 0x40, 0x40, true, 0x2a262c81e79ca580)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_DRIVER_CREATE_CONTEXT.DeviceObjectHint", device_object_hint, 0x80, 0x40, true, 0x5613a57969f32ed6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::txn_parameter_block_t*), "_IO_DRIVER_CREATE_CONTEXT.TxnParameters", txn_parameters, 0xc0, 0x40, true, 0xb62b4d4c74deb0ca)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_IO_DRIVER_CREATE_CONTEXT.SiloContext", silo_context, 0x100, 0x40, true, 0x52ac536b124cdff7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif