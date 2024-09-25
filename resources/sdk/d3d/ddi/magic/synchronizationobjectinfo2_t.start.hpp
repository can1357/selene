#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::synchronizationobject_type_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Type", type, 0x0, 0x20, true, 0x1347c7f3afbd117a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::synchronizationobject_flags_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Flags", flags, 0x20, 0x20, true, 0xff07e72881a93194)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.SynchronizationMutex.InitialState", initial_state, 0x0, 0x20, true, 0x7dfd6791d72e6ecb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_synchronization_mutex_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.SynchronizationMutex", synchronization_mutex, 0x40, 0x20, true, 0x22b60ae207f54c4f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Semaphore.MaxCount", max_count, 0x0, 0x20, true, 0xc197def4af358d44)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Semaphore.InitialCount", initial_count, 0x20, 0x20, true, 0x972859f3f0f84a2a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_semaphore_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Semaphore", semaphore, 0x40, 0x40, true, 0xa3ea98b6d48313fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Fence.FenceValue", fence_value, 0x0, 0x40, true, 0x43c559b3244efc35)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_fence_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.Fence", fence, 0x40, 0x40, true, 0x29a26f1e874644d5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.CPUNotification.Event", event, 0x0, 0x40, true, 0x70c76ceb3d7665f8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_cpu_notification_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.CPUNotification", cpu_notification, 0x40, 0x40, true, 0x9f323800c563e601)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence.InitialFenceValue", initial_fence_value, 0x0, 0x40, true, 0xa393d3d05fc9a04a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence.FenceValueCPUVirtualAddress", fence_value_cpu_virtual_address, 0x40, 0x40, true, 0xd3e9fbfc515f8686)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence.FenceValueGPUVirtualAddress", fence_value_gpu_virtual_address, 0x80, 0x40, true, 0x448e9e696e913ee5)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence.EngineAffinity", engine_affinity, 0xc0, 0x20, true, 0xd590513567264f9a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_monitored_fence_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.MonitoredFence", monitored_fence, 0x40, 0x0, true, 0x4d0c7d1baa591d36)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.hAdapter", h_adapter, 0x0, 0x20, true, 0x5b0f5da42c5563e)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.VidPnTargetId", vid_pn_target_id, 0x20, 0x20, true, 0x2fe0db7179d2420)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.Time", time, 0x40, 0x40, true, 0xe465551d9588b820)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.FenceValueCPUVirtualAddress", fence_value_cpu_virtual_address, 0x80, 0x40, true, 0xa81141d2c320852c)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.FenceValueGPUVirtualAddress", fence_value_gpu_virtual_address, 0xc0, 0x40, true, 0x26141963eb9eba48)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence.EngineAffinity", engine_affinity, 0x100, 0x20, true, 0x28958ab085301a07)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_periodic_monitored_fence_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.PeriodicMonitoredFence", periodic_monitored_fence, 0x40, 0x40, true, 0x35ba12e5574a8316)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO2.SharedHandle", shared_handle, 0x240, 0x20, true, 0x73611d7ad7b2178e)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif