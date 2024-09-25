#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXN_PARAMETER_BLOCK.Length", length, 0x0, 0x10, true, 0x3c72b0b0fbae0433)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXN_PARAMETER_BLOCK.TxFsContext", tx_fs_context, 0x10, 0x10, true, 0x1b89a6b2f1e2d354)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TXN_PARAMETER_BLOCK.TransactionObject", transaction_object, 0x40, 0x40, true, 0xa8169c220d05a48)
#else
#define _m00
#define _m01
#define _m02
#endif