#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KCRM_PROTOCOL_BLOB.ProtocolId", protocol_id, 0x0, 0x80, true, 0xceba180d5d85c15e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_PROTOCOL_BLOB.StaticInfoLength", static_info_length, 0x80, 0x20, true, 0xe5472c3a0433275f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KCRM_PROTOCOL_BLOB.TransactionIdInfoLength", transaction_id_info_length, 0xa0, 0x20, true, 0xc2e9d95b05dc2cf9)
#else
#define _m00
#define _m01
#define _m02
#endif