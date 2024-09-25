#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEAP_ERR_SRC_INVALID_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x8093b9076cea8910)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_WHEAP_ERR_SRC_INVALID_EVENT.ErrDescriptor", err_descriptor, 0x100, 0x60, true, 0xa3d3646ba191f260)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WHEAP_ERR_SRC_INVALID_EVENT.Error", error, 0x1f60, 0x0, true, 0xa0b271b6d8cf439d)
#else
#define _m00
#define _m01
#define _m02
#endif