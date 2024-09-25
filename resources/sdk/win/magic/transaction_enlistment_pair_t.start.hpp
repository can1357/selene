#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_ENLISTMENT_PAIR.EnlistmentId", enlistment_id, 0x0, 0x80, true, 0x9ef7c2635aa52e00)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_ENLISTMENT_PAIR.ResourceManagerId", resource_manager_id, 0x80, 0x80, true, 0x544a7a26abb5ce0)
#else
#define _m00
#define _m01
#endif