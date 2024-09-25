#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Signature", signature, 0x0, 0x20, true, 0x50e4c2aa5c77510e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Version", version, 0x20, 0x20, true, 0x2f4031fef5c4d686)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Length", length, 0x40, 0x20, true, 0xb38bc010aab3baf9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::event_log_entry_type_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Type", type, 0x60, 0x20, true, 0x5c4b385674dcdd76)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.OwnerTag", owner_tag, 0x80, 0x20, true, 0x82eba475cd5a6873)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::event_log_entry_id_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Id", id, 0xa0, 0x20, true, 0xc5775ae99d72bee)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::event_log_entry_flags_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.Flags", flags, 0xc0, 0x20, true, 0xfeeefa398ce6abae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_HEADER.PayloadLength", payload_length, 0xe0, 0x20, true, 0xe6f5d4aa189d1e3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif