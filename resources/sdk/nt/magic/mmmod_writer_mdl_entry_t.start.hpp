#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMMOD_WRITER_MDL_ENTRY.Links", links, 0x0, 0x80, true, 0x3c1bcf33e68c3dbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_MMMOD_WRITER_MDL_ENTRY.IoStatus", io_status, 0x80, 0x80, true, 0xae8f26e9471c6441)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_MMMOD_WRITER_MDL_ENTRY.Irp", irp, 0x100, 0x40, true, 0x345b2cc939ffe705)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::modwriter_flags_t), "_MMMOD_WRITER_MDL_ENTRY.u1", u1, 0x140, 0x20, true, 0xef792609e0e009f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMMOD_WRITER_MDL_ENTRY.StoreWriteRefCount", store_write_ref_count, 0x160, 0x20, true, 0x7b75156974158eb2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_t), "_MMMOD_WRITER_MDL_ENTRY.StoreWriteCompletionApc", store_write_completion_apc, 0x180, 0xc0, true, 0xc879f0cf2b0ac4d7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMMOD_WRITER_MDL_ENTRY.ByteCount", byte_count, 0x440, 0x20, true, 0x17df764a2e727c8e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMMOD_WRITER_MDL_ENTRY.ChargedPages", charged_pages, 0x460, 0x20, true, 0x258bf97e15544589)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpaging_file_t*), "_MMMOD_WRITER_MDL_ENTRY.PagingFile", paging_file, 0x480, 0x40, true, 0xbd2f3f64f609057c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_MMMOD_WRITER_MDL_ENTRY.File", file, 0x4c0, 0x40, true, 0x7ef9b94daba73822)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::control_area_t*), "_MMMOD_WRITER_MDL_ENTRY.ControlArea", control_area, 0x500, 0x40, true, 0x88eccf85496e4853)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t*), "_MMMOD_WRITER_MDL_ENTRY.FileResource", file_resource, 0x540, 0x40, true, 0x8617a4dbc5def39a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MMMOD_WRITER_MDL_ENTRY.WriteOffset", write_offset, 0x580, 0x40, true, 0x5b3d6d03b9286809)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MMMOD_WRITER_MDL_ENTRY.IssueTime", issue_time, 0x5c0, 0x40, true, 0xb2ac362c3028af4d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MMMOD_WRITER_MDL_ENTRY.Partition", partition, 0x600, 0x40, true, 0xce06eb25de689eb3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_MMMOD_WRITER_MDL_ENTRY.PointerMdl", pointer_mdl, 0x640, 0x40, true, 0xbb7debcafc89c14d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t), "_MMMOD_WRITER_MDL_ENTRY.Mdl", mdl, 0x680, 0x80, true, 0x1cebe7435bbd06db)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_MMMOD_WRITER_MDL_ENTRY.Page", page, 0x800, 0x40, true, 0x997cc65914f1b2c5)
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
#endif