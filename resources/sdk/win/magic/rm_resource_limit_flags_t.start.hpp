#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RM_RESOURCE_LIMIT_FLAGS.ExecutionSpeed", execution_speed, 0x0, 0x2, true, 0x47627c1ac3a7b9a, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_FLAGS.EnableHardCpuCap", enable_hard_cpu_cap, 0x2, 0x1, true, 0xef7de0116d3c861d, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_FLAGS.MonitorGpuInterference", monitor_gpu_interference, 0x3, 0x1, true, 0xdb353f3ada2d188d, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_FLAGS.UserDefinedLimits", user_defined_limits, 0x4, 0x1, true, 0xa89cebf6f95bb265, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RM_RESOURCE_LIMIT_FLAGS.TakeMaximum", take_maximum, 0x5, 0x1, true, 0xc972595e48c7e9c8, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RM_RESOURCE_LIMIT_FLAGS.All", all, 0x0, 0x20, true, 0x5863e3f8f1b7e01e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif