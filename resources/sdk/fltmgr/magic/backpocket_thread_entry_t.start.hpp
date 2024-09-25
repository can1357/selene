#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_BACKPOCKET_THREAD_ENTRY.OwningThread", owning_thread, 0x0, 0x40, true, 0x897444c4b812a9cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_BACKPOCKET_THREAD_ENTRY.IrpCtrlList", irp_ctrl_list, 0x40, 0x40, true, 0x61890562d19ce5f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BACKPOCKET_THREAD_ENTRY.Count", count, 0x80, 0x20, true, 0xd2731003577ecec2)
#else
#define _m00
#define _m01
#define _m02
#endif