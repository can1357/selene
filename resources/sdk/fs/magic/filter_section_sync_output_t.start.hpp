#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_SECTION_SYNC_OUTPUT.StructureSize", structure_size, 0x0, 0x20, true, 0x9fbf3ad1a183c51a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_SECTION_SYNC_OUTPUT.SizeReturned", size_returned, 0x20, 0x20, true, 0x12751b78abd947ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_SECTION_SYNC_OUTPUT.Flags", flags, 0x40, 0x20, true, 0x3e8deb65b82532bc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_SECTION_SYNC_OUTPUT.DesiredReadAlignment", desired_read_alignment, 0x60, 0x20, true, 0xccd490baf5c34d3f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif