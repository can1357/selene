#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_STORAGE_TYPE.DeviceId", device_id, 0x0, 0x20, true, 0x20c77b115bd3d4f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_VIRTUAL_STORAGE_TYPE.VendorId", vendor_id, 0x20, 0x80, true, 0xeec558b44c466054)
#else
#define _m00
#define _m01
#endif