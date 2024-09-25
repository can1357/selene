#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IOP_IRP_EXTENSION.ExtensionFlags", extension_flags, 0x0, 0x10, true, 0xe071aa888cdd2715)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOP_IRP_EXTENSION.Allocated", allocated, 0x0, 0x1, true, 0x551e83ff7616aa70, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IOP_IRP_EXTENSION.PropagateId", propagate_id, 0x1, 0x1, true, 0xed423a9d96be0e12, 1, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IOP_IRP_EXTENSION.TypesAllocated", types_allocated, 0x10, 0x10, true, 0x4c7531d771e4b830)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_IOP_IRP_EXTENSION.GenericExtension", generic_extension, 0x20, 0x20, true, 0x95749c61a38e1931)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IOP_IRP_EXTENSION.VerifierContext", verifier_context, 0x40, 0x40, true, 0xbf7d78204387c973)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOP_IRP_EXTENSION.DiskIoAttributionHandle", disk_io_attribution_handle, 0x80, 0x40, true, 0x3a0435a8553f8d45)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_IOP_IRP_EXTENSION.ActivityId", activity_id, 0xc0, 0x80, true, 0x3389cd9de71d3989)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IOP_IRP_EXTENSION.Timestamp", timestamp, 0x140, 0x40, true, 0xe2e0baa777ea50a3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_IRP_EXTENSION.ZeroingOffset", zeroing_offset, 0x140, 0x20, true, 0x4e1cbb534d5237b7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::irp_ext_track_offset_header_t*), "_IOP_IRP_EXTENSION.FsTrackOffsetBlob", fs_track_offset_blob, 0x140, 0x40, true, 0x28fc85dbdb436161)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_IOP_IRP_EXTENSION.FsTrackedOffset", fs_tracked_offset, 0x180, 0x40, true, 0x303d95f1bc22fc9a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::adapter_crypto_parameters_t), "_IOP_IRP_EXTENSION.AdapterCryptoParameters", adapter_crypto_parameters, 0x140, 0x80, true, 0xc566fe687b49f11e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IOP_IRP_EXTENSION.DriverFlags.Value", value, 0x0, 0x40, true, 0x58df6e2fd0eaa3cb)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_IOP_IRP_EXTENSION.DriverFlags.UserFlags", user_flags, 0x0, 0x20, true, 0x7380afc2bf7f6fb9, 32, uint64_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_IOP_IRP_EXTENSION.DriverFlags.SystemFlags", system_flags, 0x20, 0x10, true, 0x5145b010cba93ba, 16, uint64_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_IOP_IRP_EXTENSION.DriverFlags.UserFlagsId", user_flags_id, 0x30, 0x10, true, 0xbf6bf534e1bae523, 16, uint64_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_driver_flags_t), "_IOP_IRP_EXTENSION.DriverFlags", driver_flags, 0x1c0, 0x40, true, 0x6cd0ea15fc3f0604)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::copy_information_t), "_IOP_IRP_EXTENSION.CopyInformation", copy_information, 0x0, 0x0, false, 0xec3394184a7c7037)
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