#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.NamedPipeType", named_pipe_type, 0x0, 0x20, true, 0xd76a8e0e342bbe04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.NamedPipeConfiguration", named_pipe_configuration, 0x20, 0x20, true, 0xe98d198f957c8ecc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.MaximumInstances", maximum_instances, 0x40, 0x20, true, 0xff9160693c6ec3af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.CurrentInstances", current_instances, 0x60, 0x20, true, 0xf47e8b5093a3857c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.InboundQuota", inbound_quota, 0x80, 0x20, true, 0xc214eddb46ff0ab4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.ReadDataAvailable", read_data_available, 0xa0, 0x20, true, 0x48c88c7faa9d74c1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.OutboundQuota", outbound_quota, 0xc0, 0x20, true, 0x26bef242116fe730)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.WriteQuotaAvailable", write_quota_available, 0xe0, 0x20, true, 0xdcf3bc6a41e8bea5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.NamedPipeState", named_pipe_state, 0x100, 0x20, true, 0x14d1e27c4d618721)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_LOCAL_INFORMATION.NamedPipeEnd", named_pipe_end, 0x120, 0x20, true, 0x640d242b47a49f1b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif