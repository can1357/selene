#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PM_PROTOCOL_OFFLOAD.Header", header, 0x0, 0x20, true, 0xc077373aea6e7528)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PROTOCOL_OFFLOAD.Flags", flags, 0x20, 0x20, true, 0x96ea5bf3865c76d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PROTOCOL_OFFLOAD.Priority", priority, 0x40, 0x20, true, 0x1e97afecb03532ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pm_protocol_offload_type_t), "_NDIS_PM_PROTOCOL_OFFLOAD.ProtocolOffloadType", protocol_offload_type, 0x60, 0x20, true, 0x307ff664589df90e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_counted_string_t), "_NDIS_PM_PROTOCOL_OFFLOAD.FriendlyName", friendly_name, 0x80, 0x20, true, 0xe649c281eb5c7131)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PROTOCOL_OFFLOAD.ProtocolOffloadId", protocol_offload_id, 0x4a0, 0x20, true, 0xecbe63338870eadd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PM_PROTOCOL_OFFLOAD.NextProtocolOffloadOffset", next_protocol_offload_offset, 0x4c0, 0x20, true, 0xfee602721df74d2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif