#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CSQ_IRP_CONTEXT.Type", type, 0x0, 0x20, true, 0x5dce8c36e16e9f35)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IO_CSQ_IRP_CONTEXT.Irp", irp, 0x40, 0x40, true, 0x575b0a58de9236d0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::csq_t*), "_IO_CSQ_IRP_CONTEXT.Csq", csq, 0x80, 0x40, true, 0xc4c3637f20d1f784)
#else
#define _m00
#define _m01
#define _m02
#endif