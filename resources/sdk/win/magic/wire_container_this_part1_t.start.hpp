#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerThisPart1.dcomVersionUnused", dcom_version_unused, 0x0, 0x20, true, 0x49176a0ea0a856b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerThisPart1.version", version, 0x20, 0x20, true, 0xbf3df10fbb4e5e1b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.capabilityFlags", capability_flags, 0x40, 0x40, true, 0x1d7f21f98b02221a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.requestFlags", request_flags, 0x80, 0x40, true, 0x50747bacc808b6d3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.causalityId", causality_id, 0xc0, 0x80, true, 0x8aec337d6f0e782e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.unassignedSyncPassthroughGuid", unassigned_sync_passthrough_guid, 0x140, 0x80, true, 0x236dfcbeeb3beb2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.passthroughTraceActivity", passthrough_trace_activity, 0x1c0, 0x80, true, 0xe4ded05b085b4363)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.unassignedAlwaysPassthroughGuid_2", unassigned_always_passthrough_guid_2, 0x240, 0x80, true, 0xa269414a76f814ce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.callId", call_id, 0x2c0, 0x80, true, 0x52987286afba1bae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.reservedGuid_2", reserved_guid_2, 0x340, 0x80, true, 0xad3091c8cf229167)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.reservedGuid_3", reserved_guid_3, 0x3c0, 0x80, true, 0x3186d5de3a0baff)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireContainerThisPart1.reservedGuid_4", reserved_guid_4, 0x440, 0x80, true, 0x4f92fcaeb76c161c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.unassignedSyncPassthroughUint64_1", unassigned_sync_passthrough_uint64_1, 0x4c0, 0x40, true, 0x2039b75c82278515)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.unassignedSyncPassthroughUint64_2", unassigned_sync_passthrough_uint64_2, 0x500, 0x40, true, 0x1048182a1ab95478)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.unassignedAlwaysPassthroughUint64_1", unassigned_always_passthrough_uint64_1, 0x540, 0x40, true, 0x620e169e429b5ce1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.unassignedAlwaysPassthroughUint64_2", unassigned_always_passthrough_uint64_2, 0x580, 0x40, true, 0x7b8294a799c59af2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.reservedUint64_1", reserved_uint64_1, 0x5c0, 0x40, true, 0x7abb26e84e21b459)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.reservedUint64_2", reserved_uint64_2, 0x600, 0x40, true, 0x83ddaba93a01f341)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.reservedUint64_3", reserved_uint64_3, 0x640, 0x40, true, 0x1c3c12d9697ed55a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WireContainerThisPart1.reservedUint64_4", reserved_uint64_4, 0x680, 0x40, true, 0x148089f6380dfd0e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerThisPart1.reservedUint32", reserved_uint32, 0x6c0, 0x20, true, 0xf30428c9f9894ea4)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireContainerThisPart1.unique", unique, 0x6e0, 0x20, true, 0xe7e8ce5a28d33f02)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif