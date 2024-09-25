#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_TIMED_OPERATION_INTERFACE.Size", size, 0x0, 0x10, true, 0x210c96f2e41c246b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_TIMED_OPERATION_INTERFACE.Version", version, 0x10, 0x10, true, 0x6d8c7f59d3a0a512)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_TIMED_OPERATION_INTERFACE.Context", context, 0x40, 0x40, true, 0xa0b33a0a34034c0d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_TIMED_OPERATION_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x47998e58edd9c4f6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_DXGK_TIMED_OPERATION_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xfc1d9576bc9c7bb1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dxgk::timed_operation_t*, const int64_t*, uint8_t)>*), "_DXGK_TIMED_OPERATION_INTERFACE.TimedOperationStart", timed_operation_start, 0x100, 0x40, true, 0x1883805a688dac62)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dxgk::timed_operation_t*, char, uint8_t, const int64_t*)>*), "_DXGK_TIMED_OPERATION_INTERFACE.TimedOperationDelay", timed_operation_delay, 0x140, 0x40, true, 0xb1b870245b7484ee)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dxgk::timed_operation_t*, void*, enum nt::kwait_reason_t, char, uint8_t, const int64_t*)>*), "_DXGK_TIMED_OPERATION_INTERFACE.TimedOperationWaitForSingleObject", timed_operation_wait_for_single_object, 0x180, 0x40, true, 0xb8a921d08ef6f72c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif