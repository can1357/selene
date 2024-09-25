#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptp_task_execute_callback_t ), "_TP_TASK_CALLBACKS.ExecuteCallback", execute_callback, 0x0, 0x40, true, 0xd02fa17fd589d45a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(ptp_task_unposted_callback_t ), "_TP_TASK_CALLBACKS.Unposted", unposted, 0x40, 0x40, true, 0xf473de266d492aa3)
#else
#define _m00
#define _m01
#endif