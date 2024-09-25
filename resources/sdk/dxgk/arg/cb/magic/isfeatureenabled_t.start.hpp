#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_ISFEATUREENABLED.DeviceHandle", device_handle, 0x0, 0x40, true, 0x818e7f7d2352fc0b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::feature_id_t), "_DXGKARGCB_ISFEATUREENABLED.FeatureId", feature_id, 0x40, 0x20, true, 0xedebfefa9ce75de)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARGCB_ISFEATUREENABLED.Enabled", enabled, 0x60, 0x8, true, 0x258b395747a52607)
#else
#define _m00
#define _m01
#define _m02
#endif