#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::synchronizationobject_type_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.Type", type, 0x0, 0x20, true, 0x108a046c5840ae04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.SynchronizationMutex.InitialState", initial_state, 0x0, 0x20, true, 0x82897aa832bf64c7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_synchronization_mutex_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.SynchronizationMutex", synchronization_mutex, 0x20, 0x20, true, 0xa2b33316ae63b0b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.Semaphore.MaxCount", max_count, 0x0, 0x20, true, 0x56fe261ad50f2a08)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.Semaphore.InitialCount", initial_count, 0x20, 0x20, true, 0xf13165625e160f86)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_semaphore_t), "_D3DDDI_SYNCHRONIZATIONOBJECTINFO.Semaphore", semaphore, 0x20, 0x40, true, 0xaec616b6c88a7deb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif