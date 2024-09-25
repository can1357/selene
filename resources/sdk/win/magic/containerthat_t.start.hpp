#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.responseFlags", response_flags, 0x0, 0x40, true, 0x6216e36505166b3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.unassignedPassthroughGuid_1", unassigned_passthrough_guid_1, 0x40, 0x80, true, 0xf73fa3dbeec7e209)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.unassignedPassthroughGuid_2", unassigned_passthrough_guid_2, 0xc0, 0x80, true, 0x866e551ebb6c4bd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.unassignedPassthroughGuid_3", unassigned_passthrough_guid_3, 0x140, 0x80, true, 0x4c29ceccbc0265a2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.unassignedPassthroughGuid_4", unassigned_passthrough_guid_4, 0x1c0, 0x80, true, 0x76a5c009c5621a95)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.reservedGuid_1", reserved_guid_1, 0x240, 0x80, true, 0x53ecef7302636016)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.reservedGuid_2", reserved_guid_2, 0x2c0, 0x80, true, 0xde6a0c20bbd2e1c5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.reservedGuid_3", reserved_guid_3, 0x340, 0x80, true, 0x4e6018434129a48a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CONTAINERTHAT.reservedGuid_4", reserved_guid_4, 0x3c0, 0x80, true, 0x6fea2c1f45329af0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.unassignedPassthroughUint64_1", unassigned_passthrough_uint64_1, 0x440, 0x40, true, 0x47dcfc146393e969)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.unassignedPassthroughUint64_2", unassigned_passthrough_uint64_2, 0x480, 0x40, true, 0x3edb68261efac566)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.unassignedPassthroughUint64_3", unassigned_passthrough_uint64_3, 0x4c0, 0x40, true, 0x4973d5f99006b7c5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.unassignedPassthroughUint64_4", unassigned_passthrough_uint64_4, 0x500, 0x40, true, 0xf78c1b77064355dd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.marshalingSetId", marshaling_set_id, 0x540, 0x40, true, 0x73c2b2bcd808cfda)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.reservedUint64_2", reserved_uint64_2, 0x580, 0x40, true, 0x6a132fc49f2cdb8b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.reservedUint64_3", reserved_uint64_3, 0x5c0, 0x40, true, 0x570f006053b0dc33)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CONTAINERTHAT.reservedUint64_4", reserved_uint64_4, 0x600, 0x40, true, 0x7d1ed0143d6b59be)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CONTAINERTHAT.reservedUint32", reserved_uint32, 0x640, 0x20, true, 0x68abc1a2128ed701)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::container_extent_array_t*), "CONTAINERTHAT.extensions", extensions, 0x680, 0x40, true, 0x2795ea81bef9be3c)
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
#endif