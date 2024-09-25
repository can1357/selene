#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperationInfo._iidAsyncMethod", iid_async_method, 0x0, 0x80, true, 0xda6159b94a22569c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "WinrtAsyncChannelOperationInfo._procNum", proc_num, 0x80, 0x10, true, 0xbf61ea26fd28466)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtAsyncChannelOperationInfo._operationName", operation_name, 0xc0, 0x40, true, 0x53619e9cde4b61fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_async_operation_type_t), "WinrtAsyncChannelOperationInfo._operationType", operation_type, 0x100, 0x8, true, 0xe8cf3a7dbed8e168)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperationInfo._iidAsyncOperationInterface", iid_async_operation_interface, 0x120, 0x80, true, 0x8f9f48996bf51cfb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperationInfo._iidCompletedHandler", iid_completed_handler, 0x1a0, 0x80, true, 0x5088476f6292f28e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "WinrtAsyncChannelOperationInfo._piidProgressHandler", piid_progress_handler, 0x240, 0x40, true, 0xfd68e267ef1e1633)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncChannelOperationInfo._iidProgressHandler", iid_progress_handler, 0x280, 0x80, true, 0xf1e959cbff0a3163)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtAsyncChannelOperationInfo._runtimeClassName", runtime_class_name, 0x300, 0x40, true, 0xf6c864720db51e45)
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
#endif