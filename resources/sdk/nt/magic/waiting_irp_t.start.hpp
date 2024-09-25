#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WAITING_IRP.Links", links, 0x0, 0x80, true, 0x4def7450aa3ac036)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_WAITING_IRP.Irp", irp, 0x80, 0x40, true, 0xd61686b8c8d73963)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct nt::irp_t*)>*), "_WAITING_IRP.CompletionRoutine", completion_routine, 0xc0, 0x40, true, 0x3a615c2cd5716e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WAITING_IRP.Context", context, 0x100, 0x40, true, 0xa78f627fbcb93ed4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_WAITING_IRP.Event", event, 0x140, 0x40, true, 0x280b9c3fb29546ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WAITING_IRP.Information", information, 0x180, 0x20, true, 0x55a80c2f60d1afa0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WAITING_IRP.BreakAllRH", break_all_rh, 0x1a0, 0x8, true, 0x8441011219085796)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WAITING_IRP.OplockBreakNotify", oplock_break_notify, 0x1a8, 0x8, true, 0xae765455f059eb15)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WAITING_IRP.FileObject", file_object, 0x1c0, 0x40, true, 0xc7545e6372bd8b90)
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