#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT.hDevice", h_device, 0x0, 0x20, true, 0xc9df3627f314313b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::synchronizationobjectinfo_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT.Info", info, 0x20, 0x20, true, 0xdf9a58bb099b1617)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT.hSyncObject", h_sync_object, 0x240, 0x20, true, 0x19d05e9d7873867b)
#else
#define _m00
#define _m01
#define _m02
#endif