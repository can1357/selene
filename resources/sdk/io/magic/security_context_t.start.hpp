#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::quality_of_service_t*), "_IO_SECURITY_CONTEXT.SecurityQos", security_qos, 0x0, 0x40, true, 0xdacff71a00175384)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::access_state_t*), "_IO_SECURITY_CONTEXT.AccessState", access_state, 0x40, 0x40, true, 0xb66b17e32ef7666d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SECURITY_CONTEXT.DesiredAccess", desired_access, 0x80, 0x20, true, 0x64f70843a2440c9f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SECURITY_CONTEXT.FullCreateOptions", full_create_options, 0xa0, 0x20, true, 0x315e18c207d127fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif