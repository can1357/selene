#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.NamedPipeType", named_pipe_type, 0x0, 0x20, true, 0x93e73ffbdba4e278)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.ReadMode", read_mode, 0x20, 0x20, true, 0xfbab47c7e0192678)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.CompletionMode", completion_mode, 0x40, 0x20, true, 0x7800b9ceb32cb889)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.MaximumInstances", maximum_instances, 0x60, 0x20, true, 0x5e1bc690fd098acd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.InboundQuota", inbound_quota, 0x80, 0x20, true, 0x276d3005c45a8bdb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAMED_PIPE_CREATE_PARAMETERS.OutboundQuota", outbound_quota, 0xa0, 0x20, true, 0x542c7169e50d1e30)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_NAMED_PIPE_CREATE_PARAMETERS.DefaultTimeout", default_timeout, 0xc0, 0x40, true, 0x9a0c2906060e313a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_NAMED_PIPE_CREATE_PARAMETERS.TimeoutSpecified", timeout_specified, 0x100, 0x8, true, 0xebf5a67b46bc04ef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif