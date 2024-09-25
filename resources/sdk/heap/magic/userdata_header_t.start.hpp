#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_HEAP_USERDATA_HEADER.SFreeListEntry", s_free_list_entry, 0x0, 0x40, true, 0xe6fc5195444e7e47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::subsegment_t*), "_HEAP_USERDATA_HEADER.SubSegment", sub_segment, 0x0, 0x40, true, 0xbb8e9d501f1c9748)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_USERDATA_HEADER.SizeIndexAndPadding", size_index_and_padding, 0x80, 0x20, true, 0x24a32102dfa0303f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_USERDATA_HEADER.SizeIndex", size_index, 0x80, 0x8, true, 0xab6328348167d5f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_USERDATA_HEADER.GuardPagePresent", guard_page_present, 0x88, 0x8, true, 0x736eacbf2b132129)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_USERDATA_HEADER.PaddingBytes", padding_bytes, 0x90, 0x10, true, 0xde214a91a8db239f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_USERDATA_HEADER.Signature", signature, 0xa0, 0x20, true, 0x822e6c37e4910e18)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::userdata_offsets_t), "_HEAP_USERDATA_HEADER.EncodedOffsets", encoded_offsets, 0xc0, 0x20, true, 0xc263f01b80b8a830)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_HEAP_USERDATA_HEADER.BusyBitmap", busy_bitmap, 0x100, 0x80, true, 0x9b0d0e8ece44886d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_HEAP_USERDATA_HEADER.BitmapData", bitmap_data, 0x180, 0x40, true, 0x57dbcefb106a94ac)
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