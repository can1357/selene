#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_RELATED_DEVICE_DATA.TargetDeviceInstance", target_device_instance, 0x0, 0x80, true, 0x95dd31cbe10ea066)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_RELATED_DEVICE_DATA.Relation", relation, 0x80, 0x20, true, 0xff4550b0d1a2c402)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_RELATED_DEVICE_DATA.RelatedDeviceInstance", related_device_instance, 0xc0, 0x40, true, 0x609718391a86288e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_RELATED_DEVICE_DATA.RelatedDeviceInstanceLength", related_device_instance_length, 0x100, 0x20, true, 0xa0976246ff212440)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif