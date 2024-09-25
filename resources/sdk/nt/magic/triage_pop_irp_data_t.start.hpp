#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_TRIAGE_POP_IRP_DATA.Link", link, 0x0, 0x80, true, 0xda282fbb0cdc67f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_TRIAGE_POP_IRP_DATA.Irp", irp, 0x80, 0x40, true, 0xdac416739f11d55c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_TRIAGE_POP_IRP_DATA.Pdo", pdo, 0xc0, 0x40, true, 0x3b8e1b601246af39)
#else
#define _m00
#define _m01
#define _m02
#endif