#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t*), "FxUsageWorkitemParameters.RelatedDevice", related_device, 0x0, 0x40, true, 0xd6a1e6b74fca19d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_t*), "FxUsageWorkitemParameters.RelatedIrp", related_irp, 0x40, 0x40, true, 0x51a7edabd3225db3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_t*), "FxUsageWorkitemParameters.OriginalIrp", original_irp, 0x80, 0x40, true, 0x3a82c4e566a79709)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsageWorkitemParameters.Revert", revert, 0xc0, 0x8, true, 0xc72d95b87797b9e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxUsageWorkitemParameters.Event", event, 0x100, 0x0, true, 0x71841903ceaa4033)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUsageWorkitemParameters.Status", status, 0x200, 0x20, true, 0xafc0021c8f7eef8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif