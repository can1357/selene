#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncOperationInfo._iidAsyncMethod", iid_async_method, 0x0, 0x80, true, 0xbda0a82a53201308)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "WinrtAsyncOperationInfo._procNum", proc_num, 0x80, 0x10, true, 0x7145774824dfcab8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtAsyncOperationInfo._operationName", operation_name, 0xc0, 0x40, true, 0x3133cd5da7f8367f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::winrt_async_operation_type_t), "WinrtAsyncOperationInfo._operationType", operation_type, 0x100, 0x8, true, 0x205b13f5a2e63cd0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncOperationInfo._iidAsyncOperationInterface", iid_async_operation_interface, 0x120, 0x80, true, 0xed2ecadc0df927cb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncOperationInfo._iidCompletedHandler", iid_completed_handler, 0x1a0, 0x80, true, 0x9156076d72bf2832)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "WinrtAsyncOperationInfo._piidProgressHandler", piid_progress_handler, 0x240, 0x40, true, 0x6848f3a1ce4ba34c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WinrtAsyncOperationInfo._iidProgressHandler", iid_progress_handler, 0x280, 0x80, true, 0xee05cc30b03ff4b7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "WinrtAsyncOperationInfo._runtimeClassName", runtime_class_name, 0x300, 0x40, true, 0x8b62f48a51ebf5d4)
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