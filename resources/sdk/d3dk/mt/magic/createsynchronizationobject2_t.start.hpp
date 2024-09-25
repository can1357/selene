#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT2.hDevice", h_device, 0x0, 0x20, true, 0xfdc8c1e6d35e4337)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::synchronizationobjectinfo2_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT2.Info", info, 0x40, 0x80, true, 0x656f7616eeeb6a86)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATESYNCHRONIZATIONOBJECT2.hSyncObject", h_sync_object, 0x2c0, 0x20, true, 0x9716578cf255317)
#else
#define _m00
#define _m01
#define _m02
#endif