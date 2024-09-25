#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_rpcnotification_routine_t ), "_RPC_ASYNC_NOTIFICATION_INFO.APC.NotificationRoutine", notification_routine, 0x0, 0x40, true, 0x87349785ee506b6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_NOTIFICATION_INFO.APC.hThread", h_thread, 0x40, 0x40, true, 0xf51e7e35b38247a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_apc_t), "_RPC_ASYNC_NOTIFICATION_INFO.APC", apc, 0x0, 0x80, true, 0xbeafdade216c303f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_NOTIFICATION_INFO.IOC.hIOPort", h_io_port, 0x0, 0x40, true, 0x530335445722a09d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_ASYNC_NOTIFICATION_INFO.IOC.dwNumberOfBytesTransferred", dw_number_of_bytes_transferred, 0x40, 0x20, true, 0xe243743fad5fcac2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RPC_ASYNC_NOTIFICATION_INFO.IOC.dwCompletionKey", dw_completion_key, 0x80, 0x40, true, 0xe4afd44e6fb6d826)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::overlapped_t*), "_RPC_ASYNC_NOTIFICATION_INFO.IOC.lpOverlapped", lp_overlapped, 0xc0, 0x40, true, 0x5567ac3118c10681)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_ioc_t), "_RPC_ASYNC_NOTIFICATION_INFO.IOC", ioc, 0x0, 0x0, true, 0x6a16ed8bde7e6fd5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RPC_ASYNC_NOTIFICATION_INFO.hEvent", h_event, 0x0, 0x40, true, 0xb3e774a94de7d193)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_rpcnotification_routine_t ), "_RPC_ASYNC_NOTIFICATION_INFO.NotificationRoutine", notification_routine, 0x0, 0x40, true, 0xa04710dc2933dee2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif