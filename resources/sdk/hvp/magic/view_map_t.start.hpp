#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HVP_VIEW_MAP.SectionReference", section_reference, 0x0, 0x40, true, 0xb64a3ff5feab88f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HVP_VIEW_MAP.StorageEndFileOffset", storage_end_file_offset, 0x40, 0x40, true, 0x2fbb46762c15c9ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_HVP_VIEW_MAP.SectionEndFileOffset", section_end_file_offset, 0x80, 0x40, true, 0x34384dd50e95d03d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cmsi_process_tuple_t*), "_HVP_VIEW_MAP.ProcessTuple", process_tuple, 0xc0, 0x40, true, 0x171efc80301d06ce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVP_VIEW_MAP.Flags", flags, 0x100, 0x20, true, 0x1e3e972432220fb1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_HVP_VIEW_MAP.ViewTree", view_tree, 0x140, 0x80, true, 0x3ce870004fc9e830)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif