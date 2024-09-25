#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MicrosoftTelemetryAssertTriggeredNode.Hash", hash, 0x0, 0x40, true, 0x644f7d26cf5e6e76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MicrosoftTelemetryAssertTriggeredNode.LastUpload", last_upload, 0x40, 0x40, true, 0xcc497c0f9da9dfcf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertTriggeredNode.Count", count, 0x80, 0x20, true, 0x33a6a7cfc328187e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertTriggeredNode.TotalHits", total_hits, 0xa0, 0x20, true, 0xb79c69388683c4bd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertTriggeredNode.SuccessfulWatsons", successful_watsons, 0xc0, 0x20, true, 0xa7e2acd7140d420b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MicrosoftTelemetryAssertTriggeredNode.ListNode", list_node, 0x100, 0x80, true, 0xdf1f51d31b85e60a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif