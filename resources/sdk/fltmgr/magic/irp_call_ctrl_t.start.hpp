#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_IRP_CALL_CTRL.Volume", volume, 0x0, 0x40, true, 0xd6a5fa03f89a9086)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IRP_CALL_CTRL.Irp", irp, 0x40, 0x40, true, 0xcb17beb8c8a89ca8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::irp_ctrl_t*), "_IRP_CALL_CTRL.IrpCtrl", irp_ctrl, 0x80, 0x40, true, 0x58b121fb2806f276)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::callback_node_t*), "_IRP_CALL_CTRL.StartingCallbackNode", starting_callback_node, 0xc0, 0x40, true, 0xd5c0e486c1c32f76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_IRP_CALL_CTRL.OperationStatusCallbackListHead", operation_status_callback_list_head, 0x100, 0x40, true, 0xcd25ddb06fbca058)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::icc_flags_t), "_IRP_CALL_CTRL.Flags", flags, 0x140, 0x20, true, 0x469534f6fc62c226)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif