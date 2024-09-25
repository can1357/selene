#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_BASIC_INFORMATION.EnlistmentId", enlistment_id, 0x0, 0x80, true, 0x6777308636468af7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_BASIC_INFORMATION.TransactionId", transaction_id, 0x80, 0x80, true, 0x710e5100511a7b7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ENLISTMENT_BASIC_INFORMATION.ResourceManagerId", resource_manager_id, 0x100, 0x80, true, 0xc3eec41d54ddc1e6)
#else
#define _m00
#define _m01
#define _m02
#endif