#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_SEGMENT.ControlArea", control_area, 0x0, 0x40, true, 0x56aa0bd6e0542b6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT.TotalNumberOfPtes", total_number_of_ptes, 0x40, 0x20, true, 0x592d78fc9f04f74d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::segment_flags_t), "_SEGMENT.SegmentFlags", segment_flags, 0x60, 0x20, true, 0x65b181c19ec7a4e4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT.NumberOfCommittedPages", number_of_committed_pages, 0x80, 0x40, true, 0xd831eeb3940b8b8e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT.SizeOfSegment", size_of_segment, 0xc0, 0x40, true, 0xd05252e6ce624e9d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmextend_info_t*), "_SEGMENT.ExtendInfo", extend_info, 0x100, 0x40, true, 0xd00ca9b2f59b15e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEGMENT.BasedAddress", based_address, 0x100, 0x40, true, 0xbf3d7f46e80fec24)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SEGMENT.SegmentLock", segment_lock, 0x140, 0x40, true, 0x6d36f2799751e003)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEGMENT.ImageCommitment", image_commitment, 0x180, 0x40, true, 0xb5a198dab66aaa04)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::section_image_information_t*), "_SEGMENT.ImageInformation", image_information, 0x1c0, 0x40, true, 0xb9ef083b2cf52541)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEGMENT.FirstMappedVa", first_mapped_va, 0x1c0, 0x40, true, 0x2e5a4e109cddbf15)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_SEGMENT.PrototypePte", prototype_pte, 0x200, 0x40, true, 0xcae4101d861bc79a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEGMENT.CreatingProcessId", creating_process_id, 0x180, 0x20, true, 0x66eeb39265134070)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_SEGMENT.CreatingProcess", creating_process, 0x0, 0x0, false, 0xacf46a356749288f)
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
#endif