#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_BUS_ASYNC_DISPATCHER_CONTEXT.Irp", irp, 0x0, 0x40, true, 0xac2ebc180e3ffb93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::stack_location_t*), "_PCI_BUS_ASYNC_DISPATCHER_CONTEXT.IrpSp", irp_sp, 0x40, 0x40, true, 0x1fe27f59b04d8f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::irp_t*, struct io::stack_location_t*, void*)>*), "_PCI_BUS_ASYNC_DISPATCHER_CONTEXT.Routine", routine, 0x80, 0x40, true, 0x72f6d937a8253130)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_BUS_ASYNC_DISPATCHER_CONTEXT.Complete", complete, 0xc0, 0x8, true, 0x57bce727edf4429d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif