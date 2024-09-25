#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_HOTPLUG_INFO.Size", size, 0x0, 0x20, true, 0x54cc1e96cfd386b5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HOTPLUG_INFO.MediaRemovable", media_removable, 0x20, 0x8, true, 0x3b84df6d144e25de)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HOTPLUG_INFO.MediaHotplug", media_hotplug, 0x28, 0x8, true, 0xe09cdd5ba3c6dbe8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HOTPLUG_INFO.DeviceHotplug", device_hotplug, 0x30, 0x8, true, 0xe629586dbd3fe954)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_HOTPLUG_INFO.WriteCacheEnableOverride", write_cache_enable_override, 0x38, 0x8, true, 0x1323d121b9834a87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif