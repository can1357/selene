#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TXFS_SAVEPOINT_INFORMATION.KtmTransaction", ktm_transaction, 0x0, 0x40, true, 0xb5b37673cf9ab70a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_SAVEPOINT_INFORMATION.ActionCode", action_code, 0x40, 0x20, true, 0x3048ce9662db1e62)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_SAVEPOINT_INFORMATION.SavepointId", savepoint_id, 0x60, 0x20, true, 0x5f6902dca8bc4c9b)
#else
#define _m00
#define _m01
#define _m02
#endif