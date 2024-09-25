#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_RM_RESOURCE_REQUEST.ResourcesRequested", resources_requested, 0x0, 0x80, true, 0xbd053d39f019c3be)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_REQUEST.UseEstimation", use_estimation, 0x80, 0x1, true, 0x869b7a80ae9c0551, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_REQUEST.IoRequestValid", io_request_valid, 0x81, 0x1, true, 0xc7b69fec3a81c76f, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_REQUEST.CommitRequestValid", commit_request_valid, 0x82, 0x1, true, 0xe26e1d9c097d499b, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RM_RESOURCE_REQUEST.Flags", flags, 0x80, 0x20, true, 0x90e4502cdbd5067b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RM_RESOURCE_REQUEST.EstimationKey", estimation_key, 0xc0, 0x40, true, 0xf0d068a8d4f15040)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif