#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_VOLUME_CACHE_MAP.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xe805891540f3e9b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_VOLUME_CACHE_MAP.NodeByteCode", node_byte_code, 0x10, 0x10, true, 0xe5c32efe3bcbd63a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CACHE_MAP.UseCount", use_count, 0x20, 0x20, true, 0xbabb8f7571ae9521)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_VOLUME_CACHE_MAP.DeviceObject", device_object, 0x40, 0x40, true, 0x45425362b874324a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VOLUME_CACHE_MAP.VolumeCacheMapLinks", volume_cache_map_links, 0x80, 0x80, true, 0xc80fc416e041500c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VOLUME_CACHE_MAP.DirtyPages", dirty_pages, 0x100, 0x40, true, 0x6b58bc553f10648)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::log_handle_context_t), "_VOLUME_CACHE_MAP.LogHandleContext", log_handle_context, 0x140, 0xc0, true, 0xb7427e3f8299ec8e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CACHE_MAP.Flags", flags, 0x600, 0x20, true, 0x6967364200801c2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CACHE_MAP.PagesQueuedToDisk", pages_queued_to_disk, 0x620, 0x20, true, 0xb160e72200be0440)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CACHE_MAP.LoggedPagesQueuedToDisk", logged_pages_queued_to_disk, 0x640, 0x20, true, 0x3c4a0eb73d390405)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_CACHE_MAP.VolumeId", volume_id, 0x0, 0x0, false, 0xaefa7ac4b767393b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VOLUME_CACHE_MAP.PrivateVolumeList", private_volume_list, 0x0, 0x0, false, 0x88117c4ffeb68ef2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::volume_telemetry_t), "_VOLUME_CACHE_MAP.VolumeTelemetry", volume_telemetry, 0x0, 0x0, false, 0x97e812515424b478)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif