#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RH_OP_CONTEXT.Links", links, 0x0, 0x80, true, 0x58a5afc06af66a4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RH_OP_CONTEXT.OplockRequestIrp", oplock_request_irp, 0x80, 0x40, true, 0xeff2c22c4d96945f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_RH_OP_CONTEXT.OplockRequestFileObject", oplock_request_file_object, 0xc0, 0x40, true, 0xf3cf2cdfc868f152)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_RH_OP_CONTEXT.OplockRequestProcess", oplock_request_process, 0x100, 0x40, true, 0xe6f8b18769eaee4f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_RH_OP_CONTEXT.OplockOwnerThread", oplock_owner_thread, 0x140, 0x40, true, 0xc957472ed7e7ecbe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RH_OP_CONTEXT.Flags", flags, 0x180, 0x20, true, 0x1d0df05b454182db)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RH_OP_CONTEXT.AtomicLinks", atomic_links, 0x1c0, 0x80, true, 0x639cbce97a2270e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif