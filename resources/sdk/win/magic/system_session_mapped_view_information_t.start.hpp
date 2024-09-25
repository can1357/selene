#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x40, true, 0x9f5ba1ea876a5192)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.SessionId", session_id, 0x40, 0x20, true, 0x5233d5fecf8970e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.ViewFailures", view_failures, 0x60, 0x20, true, 0x12bb0ae969dbfbf8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.NumberOfBytesAvailable", number_of_bytes_available, 0x80, 0x40, true, 0x287fbd0a093206)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SESSION_MAPPED_VIEW_INFORMATION.NumberOfBytesAvailableContiguous", number_of_bytes_available_contiguous, 0xc0, 0x40, true, 0xb0f01dd1fe5b1ed7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif