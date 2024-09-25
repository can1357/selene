#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MAPPED_FILE_SEGMENT.ControlArea", control_area, 0x0, 0x40, true, 0xb315cc625abbe2ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MAPPED_FILE_SEGMENT.TotalNumberOfPtes", total_number_of_ptes, 0x40, 0x20, true, 0x54b4976052d09091)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::segment_flags_t), "_MAPPED_FILE_SEGMENT.SegmentFlags", segment_flags, 0x60, 0x20, true, 0x458694f480ba968f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MAPPED_FILE_SEGMENT.NumberOfCommittedPages", number_of_committed_pages, 0x80, 0x40, true, 0x14b3a3bbb940c84b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MAPPED_FILE_SEGMENT.SizeOfSegment", size_of_segment, 0xc0, 0x40, true, 0x1c9d133d3cb29088)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmextend_info_t*), "_MAPPED_FILE_SEGMENT.ExtendInfo", extend_info, 0x100, 0x40, true, 0x8b99c6314874e877)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MAPPED_FILE_SEGMENT.BasedAddress", based_address, 0x100, 0x40, true, 0xa1f7218e00f9d15e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MAPPED_FILE_SEGMENT.SegmentLock", segment_lock, 0x140, 0x40, true, 0xcea9b02b4ffda9ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif