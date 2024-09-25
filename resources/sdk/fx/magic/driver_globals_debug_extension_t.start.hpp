#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::object_debug_info_t*), "FxDriverGlobalsDebugExtension.ObjectDebugInfo", object_debug_info, 0x0, 0x40, true, 0xd7297bedac3011c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::allocated_mdls_t), "FxDriverGlobalsDebugExtension.AllocatedMdls", allocated_mdls, 0x40, 0x80, true, 0x2ec04ab825866990)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDriverGlobalsDebugExtension.AllocatedMdlsLock", allocated_mdls_lock, 0xcc0, 0x40, true, 0x907399f99e8f9ab9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDriverGlobalsDebugExtension.AllocatedTagTrackersListHead", allocated_tag_trackers_list_head, 0xd00, 0x80, true, 0x9a76800ee9e9ffa1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDriverGlobalsDebugExtension.AllocatedTagTrackersLock", allocated_tag_trackers_lock, 0xd80, 0x80, true, 0x6b4887c2186d697e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::track_power_option_t), "FxDriverGlobalsDebugExtension.TrackPower", track_power, 0xe00, 0x8, true, 0x96fed0f80ead8ea6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::state_separation_detection_option_t), "FxDriverGlobalsDebugExtension.StateSeparationDetection", state_separation_detection, 0xe20, 0x20, true, 0x88a2c2ad5855c59c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif