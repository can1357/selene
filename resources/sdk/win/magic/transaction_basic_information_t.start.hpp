#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRANSACTION_BASIC_INFORMATION.TransactionId", transaction_id, 0x0, 0x80, true, 0x68cae90eb0fbc282)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_BASIC_INFORMATION.State", state, 0x80, 0x20, true, 0x2dc3cf2b53690567)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_BASIC_INFORMATION.Outcome", outcome, 0xa0, 0x20, true, 0x4129734cd547c1be)
#else
#define _m00
#define _m01
#define _m02
#endif