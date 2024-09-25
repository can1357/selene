#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::irp_ctrl_t*), "_COMPLETION_NODE.IrpCtrl", irp_ctrl, 0x0, 0x40, true, 0x9555308039e5559)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::callback_node_t*), "_COMPLETION_NODE.CallbackNode", callback_node, 0x40, 0x40, true, 0xeccc05c279f69083)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t*), "_COMPLETION_NODE.Filter", filter, 0x40, 0x40, true, 0xdf5fe851100e131a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_COMPLETION_NODE.InstanceLink", instance_link, 0x80, 0x80, true, 0x21e849fcd88489f9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::completion_node_tracking_list_t*), "_COMPLETION_NODE.InstanceTrackingList", instance_tracking_list, 0x100, 0x40, true, 0x9736cfe6d79a415f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_COMPLETION_NODE.Context", context, 0x140, 0x40, true, 0x22fab464523bb5d4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_io_parameter_block_t), "_COMPLETION_NODE.DataSnapshot", data_snapshot, 0x180, 0x40, true, 0x398b30c5ff64ca12)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMPLETION_NODE.Flags", flags, 0x3c0, 0x10, true, 0x3b0d381bc375ddfc)
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