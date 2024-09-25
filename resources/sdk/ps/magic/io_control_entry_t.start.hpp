#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_PS_IO_CONTROL_ENTRY.VolumeTreeNode", volume_tree_node, 0x0, 0xc0, true, 0x79472dbeb29f88bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PS_IO_CONTROL_ENTRY.FreeListEntry", free_list_entry, 0x0, 0x80, true, 0x5f44fa8fbfb2a5a6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_IO_CONTROL_ENTRY.ReservedForParentValue", reserved_for_parent_value, 0x80, 0x40, true, 0x9d727f15926fe477)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_IO_CONTROL_ENTRY.VolumeKey", volume_key, 0xc0, 0x40, true, 0x77bc2a6c6dff7917)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_t), "_PS_IO_CONTROL_ENTRY.Rundown", rundown, 0x100, 0x40, true, 0x800e0a3253ba044e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_IO_CONTROL_ENTRY.IoControl", io_control, 0x140, 0x40, true, 0xa3e28e5f758cf849)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PS_IO_CONTROL_ENTRY.VolumeIoAttribution", volume_io_attribution, 0x180, 0x40, true, 0xc6a872f79b7b5bd7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif