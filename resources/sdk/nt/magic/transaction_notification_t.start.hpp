#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_TRANSACTION_NOTIFICATION.TransactionKey", transaction_key, 0x0, 0x40, true, 0x91dc4cfadbf46003)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION.TransactionNotification", transaction_notification, 0x40, 0x20, true, 0x975e8bc1333b9675)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TRANSACTION_NOTIFICATION.TmVirtualClock", tm_virtual_clock, 0x80, 0x40, true, 0xd45351b956b85e1f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_NOTIFICATION.ArgumentLength", argument_length, 0xc0, 0x20, true, 0xa7920fd112f7d2d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif