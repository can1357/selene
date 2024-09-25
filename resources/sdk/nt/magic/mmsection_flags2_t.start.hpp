#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MMSECTION_FLAGS2.PartitionId", partition_id, 0x0, 0xa, true, 0xe3ee55b8f19ead7b, 10, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECTION_FLAGS2.NoCrossPartitionAccess", no_cross_partition_access, 0x10, 0x1, true, 0x72e5d79f6ff98a44, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMSECTION_FLAGS2.SubsectionCrossPartitionReferenceOverflow", subsection_cross_partition_reference_overflow, 0x11, 0x1, true, 0xfe8a8c54dcda0cdb, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint22_t), "_MMSECTION_FLAGS2.NumberOfChildViews", number_of_child_views, 0x0, 0x0, false, 0xa392b267024873e, 22, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMSECTION_FLAGS2.UsingFileExtents", using_file_extents, 0x0, 0x0, false, 0x2862204b21939138, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif