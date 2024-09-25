#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0xe35bc40d4ce3533c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT.Descriptor", descriptor, 0x100, 0x60, true, 0x582eb00c86051c4e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT.Status", status, 0x1f60, 0x20, true, 0x8cb61b72fba3b0e8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_ADD_REMOVE_ERROR_SOURCE_EVENT.IsRemove", is_remove, 0x1f80, 0x8, true, 0x215d8855423cc991)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif