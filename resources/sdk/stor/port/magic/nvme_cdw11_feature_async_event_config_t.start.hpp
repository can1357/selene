#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.CriticalWarnings", critical_warnings, 0x0, 0x0, false, 0xcd1910404d194d96, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.NsAttributeNotices", ns_attribute_notices, 0x0, 0x0, false, 0xe3d7741ea7ab0271, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.FwActivationNotices", fw_activation_notices, 0x0, 0x0, false, 0x70ad9392b0dee4f5, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.TelemetryLogNotices", telemetry_log_notices, 0x0, 0x0, false, 0xe522de884840d07b, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.ANAChangeNotices", ana_change_notices, 0x0, 0x0, false, 0x2653109917060f22, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.PredictableLogChangeNotices", predictable_log_change_notices, 0x0, 0x0, false, 0x2946bb075fcf5e99, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.LBAStatusNotices", lba_status_notices, 0x0, 0x0, false, 0xfe3106b5191d7044, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.EnduranceEventNotices", endurance_event_notices, 0x0, 0x0, false, 0x422bcd1ce5df207b, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.ZoneDescriptorNotices", zone_descriptor_notices, 0x0, 0x0, false, 0x39aa9fd55c9743b4, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG.AsUlong", as_ulong, 0x0, 0x0, false, 0x96b9dd30e5f31317)
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
#endif