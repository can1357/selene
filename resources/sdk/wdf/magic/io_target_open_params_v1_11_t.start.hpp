#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.Size", size, 0x0, 0x20, true, 0xd9d94791f2adbaf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.Type", type, 0x20, 0x20, true, 0x2a8683be339edda5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x40, 0x40, true, 0x8b61a8a83464f16f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x80, 0x40, true, 0x317e6f201227b65b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0xc0, 0x40, true, 0xff33051b49f18e67)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.TargetDeviceObject", target_device_object, 0x100, 0x40, true, 0xbeb506f7e767e603)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.TargetFileObject", target_file_object, 0x140, 0x40, true, 0x76f38a0fc76ccb36)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.TargetDeviceName", target_device_name, 0x180, 0x80, true, 0x92ba490bb243bb7c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.DesiredAccess", desired_access, 0x200, 0x20, true, 0x1503460838daaf3c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.ShareAccess", share_access, 0x220, 0x20, true, 0x9e8ab06563c07990)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.FileAttributes", file_attributes, 0x240, 0x20, true, 0xeb3a57738286edfa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.CreateDisposition", create_disposition, 0x260, 0x20, true, 0x3261d16591b30349)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.CreateOptions", create_options, 0x280, 0x20, true, 0xed4d188e0ae6a776)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.EaBuffer", ea_buffer, 0x2c0, 0x40, true, 0xcfb481a7f5e599c5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.EaBufferLength", ea_buffer_length, 0x300, 0x20, true, 0xde6c9b8898b99e3a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.AllocationSize", allocation_size, 0x340, 0x40, true, 0xa5673aa28229653e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_11.FileInformation", file_information, 0x380, 0x20, true, 0x3736c7136db6ad4e)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif