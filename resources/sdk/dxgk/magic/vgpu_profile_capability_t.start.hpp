#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_PROFILE_CAPABILITY.TotalValue", total_value, 0x0, 0x40, true, 0x29122d570743b91f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_PROFILE_CAPABILITY.AvailableValue", available_value, 0x40, 0x40, true, 0x17860301ce2cefc6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_PROFILE_CAPABILITY.MinPartitionValue", min_partition_value, 0x80, 0x40, true, 0x8e9e14b16afdfa0c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_PROFILE_CAPABILITY.MaxPartitionValue", max_partition_value, 0xc0, 0x40, true, 0x6fc62e783809915e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VGPU_PROFILE_CAPABILITY.OptimalPartitionValue", optimal_partition_value, 0x100, 0x40, true, 0x7053ac720ff4ce1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif