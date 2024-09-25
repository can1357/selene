#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEVIRTUALGPU.PartitionId", partition_id, 0x0, 0x20, true, 0xb2520737ec8aa2fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::virtualgpuprofile_t), "_DXGKARG_CREATEVIRTUALGPU.Profile", profile, 0x40, 0x0, true, 0x3cba6dc26b8e99da)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXGKARG_CREATEVIRTUALGPU.UserModeVirtualDeviceProvider", user_mode_virtual_device_provider, 0x340, 0x80, true, 0x799c946c03f4c016)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_DXGKARG_CREATEVIRTUALGPU.VirtualGpuLuid", virtual_gpu_luid, 0x3c0, 0x40, true, 0x18d0f9946507132a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEVIRTUALGPU.NumMemorySegments", num_memory_segments, 0x400, 0x20, true, 0x288c8f4f27e04c77)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::virtualgpusegmentinfo_t, 32>), "_DXGKARG_CREATEVIRTUALGPU.SegmentInfo", segment_info, 0x440, 0x0, true, 0xa527697fa3510660)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEVIRTUALGPU.NumEngines", num_engines, 0x3440, 0x20, true, 0xabcbdcce7ccbf42)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::virtualgpuengineinfo_t, 64>), "_DXGKARG_CREATEVIRTUALGPU.EngineInfo", engine_info, 0x3460, 0x0, true, 0x5ace2bacc2aa13f3)
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