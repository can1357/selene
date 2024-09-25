#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERTHIS.dcomVersionUnused", dcom_version_unused, 0x0, 0x20, true, 0x3ba36e9c6b1cdc53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERTHIS.version", version, 0x20, 0x20, true, 0xbbbf856c7af29a62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.capabilityFlags", capability_flags, 0x40, 0x40, true, 0xd48a041c76e1e240)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.requestFlags", request_flags, 0x80, 0x40, true, 0x1e7e95ef5839045)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.causalityId", causality_id, 0xc0, 0x80, true, 0x2edcec319540c591)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.unassignedSyncPassthroughGuid", unassigned_sync_passthrough_guid, 0x140, 0x80, true, 0x75cade926ab93620)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.passthroughTraceActivity", passthrough_trace_activity, 0x1c0, 0x80, true, 0xc557f00edd775b9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.unassignedAlwaysPassthroughGuid_2", unassigned_always_passthrough_guid_2, 0x240, 0x80, true, 0x4115b3248ee7a1ff)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.callId", call_id, 0x2c0, 0x80, true, 0x511382fce397cce0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.reservedGuid_2", reserved_guid_2, 0x340, 0x80, true, 0x1b66285a24ce96e9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.reservedGuid_3", reserved_guid_3, 0x3c0, 0x80, true, 0x9fd7b129052c9def)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHIS.reservedGuid_4", reserved_guid_4, 0x440, 0x80, true, 0x2ef86cf59b2f7860)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.unassignedSyncPassthroughUint64_1", unassigned_sync_passthrough_uint64_1, 0x4c0, 0x40, true, 0x78efd57c363be57e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.unassignedSyncPassthroughUint64_2", unassigned_sync_passthrough_uint64_2, 0x500, 0x40, true, 0x28dcc966fd326955)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.unassignedAlwaysPassthroughUint64_1", unassigned_always_passthrough_uint64_1, 0x540, 0x40, true, 0x9cfcfb4fdee343c8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.unassignedAlwaysPassthroughUint64_2", unassigned_always_passthrough_uint64_2, 0x580, 0x40, true, 0xbf0a22100e0fd001)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.reservedUint64_1", reserved_uint64_1, 0x5c0, 0x40, true, 0x86bd55fa7e055065)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.reservedUint64_2", reserved_uint64_2, 0x600, 0x40, true, 0xa5ff968219bb0916)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.reservedUint64_3", reserved_uint64_3, 0x640, 0x40, true, 0x12ac681d3c0ce0c6)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHIS.reservedUint64_4", reserved_uint64_4, 0x680, 0x40, true, 0x852c67e201420774)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERTHIS.reservedUint32", reserved_uint32, 0x6c0, 0x20, true, 0xd328745e7df780fd)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::container_extent_array_t*), "CONTAINERTHIS.extensions", extensions, 0x700, 0x40, true, 0xb35659d8cbb4a374)
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