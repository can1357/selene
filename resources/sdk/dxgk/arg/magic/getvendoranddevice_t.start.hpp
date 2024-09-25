#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETVENDORANDDEVICE.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x50773631b64bb084)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_GETVENDORANDDEVICE.VendorId", vendor_id, 0x20, 0x10, true, 0x68c1edc428c0c82b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_GETVENDORANDDEVICE.DeviceId", device_id, 0x30, 0x10, true, 0x7ccf95b992728e80)
#else
#define _m00
#define _m01
#define _m02
#endif