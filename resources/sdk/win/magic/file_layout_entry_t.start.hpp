#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.Version", version, 0x0, 0x20, true, 0xbb9bd87f6fa6fcc0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.NextFileOffset", next_file_offset, 0x20, 0x20, true, 0x990b3fe46dcb62b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.Flags", flags, 0x40, 0x20, true, 0x4c92d72a856ab3ee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.FileAttributes", file_attributes, 0x60, 0x20, true, 0xc49f90cd18d42776)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_LAYOUT_ENTRY.FileReferenceNumber", file_reference_number, 0x80, 0x40, true, 0x3814b7a6a904bf40)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.FirstNameOffset", first_name_offset, 0xc0, 0x20, true, 0x9d149c0924345e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.FirstStreamOffset", first_stream_offset, 0xe0, 0x20, true, 0x2212a4e835afe481)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.ExtraInfoOffset", extra_info_offset, 0x100, 0x20, true, 0x66dfb44a8e2b54c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_ENTRY.ExtraInfoLength", extra_info_length, 0x120, 0x20, true, 0x42a11a09e88b3910)
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
#endif