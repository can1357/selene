#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.DeviceInstance", device_instance, 0x0, 0x20, true, 0x4748f623b800dba4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.DeviceFlags", device_flags, 0x20, 0x20, true, 0xe1a4b519c48cbc59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.ResourceType", resource_type, 0x40, 0x20, true, 0x9e766cc1ed59d892)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.ResourceStart", resource_start, 0x80, 0x40, true, 0xede1061d0de320e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.ResourceEnd", resource_end, 0xc0, 0x40, true, 0x365a79fce2e095c6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_ENTRY.ResourceFlags", resource_flags, 0x100, 0x20, true, 0x8466078e6e979ed9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif