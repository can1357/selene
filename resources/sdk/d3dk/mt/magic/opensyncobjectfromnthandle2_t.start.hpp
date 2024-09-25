#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.hNtHandle", h_nt_handle, 0x0, 0x40, true, 0x4c7c8be2be9064f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.hDevice", h_device, 0x40, 0x20, true, 0x5396e78ef981ee3a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::synchronizationobject_flags_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.Flags", flags, 0x60, 0x20, true, 0x55a9e32f6849d53b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.hSyncObject", h_sync_object, 0x80, 0x20, true, 0x309c004c9d8bcf74)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.MonitoredFence.FenceValueCPUVirtualAddress", fence_value_cpu_virtual_address, 0x0, 0x40, true, 0x856bdd817f209f0c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.MonitoredFence.FenceValueGPUVirtualAddress", fence_value_gpu_virtual_address, 0x40, 0x40, true, 0xb3d262942308233c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.MonitoredFence.EngineAffinity", engine_affinity, 0x80, 0x20, true, 0xb147c6bdfe52e0d2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_monitored_fence_t), "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.MonitoredFence", monitored_fence, 0xc0, 0xc0, true, 0xee67152538f1a11)
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