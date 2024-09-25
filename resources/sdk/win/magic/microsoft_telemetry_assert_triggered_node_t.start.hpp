#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MicrosoftTelemetryAssertTriggeredNode.Hash", hash, 0x0, 0x40, true, 0x15c1d4907892a214)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MicrosoftTelemetryAssertTriggeredNode.LastUpload", last_upload, 0x40, 0x20, true, 0x203393fa5c41b3fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MicrosoftTelemetryAssertTriggeredNode.Count", count, 0x60, 0x20, true, 0x80bbcea8dcd76a5b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MicrosoftTelemetryAssertTriggeredNode.TotalHits", total_hits, 0x80, 0x20, true, 0x32da27999b63b84a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::microsoft_telemetry_assert_triggered_node_t*), "MicrosoftTelemetryAssertTriggeredNode.Next", next, 0xc0, 0x40, true, 0xf941ce749ba43e00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif