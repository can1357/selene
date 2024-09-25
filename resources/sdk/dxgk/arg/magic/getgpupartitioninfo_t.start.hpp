#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETGPUPARTITIONINFO.NumGpuPartitionOptions", num_gpu_partition_options, 0x0, 0x20, true, 0xef050619d5e57dc5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_DXGKARG_GETGPUPARTITIONINFO.pGpuPartitionOptions", p_gpu_partition_options, 0x40, 0x40, true, 0xdbfde745ec5e1102)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_GETGPUPARTITIONINFO.CurrentGpuPartitionCount", current_gpu_partition_count, 0x80, 0x10, true, 0x78bcda963eec53dd)
#else
#define _m00
#define _m01
#define _m02
#endif