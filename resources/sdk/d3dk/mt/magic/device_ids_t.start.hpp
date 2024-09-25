#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.VendorID", vendor_id, 0x0, 0x20, true, 0x10dfe8551a223ba2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.DeviceID", device_id, 0x20, 0x20, true, 0x6239d0660abb6206)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.SubVendorID", sub_vendor_id, 0x40, 0x20, true, 0xe24c365dfb413740)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.SubSystemID", sub_system_id, 0x60, 0x20, true, 0x1a986a8ce7613032)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.RevisionID", revision_id, 0x80, 0x20, true, 0x1acb1e1b808240c3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICE_IDS.BusType", bus_type, 0xa0, 0x20, true, 0x4ae4c2c03de9b2cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif