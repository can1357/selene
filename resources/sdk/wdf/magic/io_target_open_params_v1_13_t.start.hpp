#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.Size", size, 0x0, 0x0, false, 0xe25db007771fff07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.Type", type, 0x0, 0x0, false, 0x9d9da7631239aaff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0xa8908bd8b58616c0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0xaa43faab2ead78cd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0x8b67d0e5eff4b7b3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x9608add90e718822)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.TargetFileObject", target_file_object, 0x0, 0x0, false, 0x6d25467ad1df4793)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x78f5d2694970b72e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.DesiredAccess", desired_access, 0x0, 0x0, false, 0xe40d3fadc1788b15)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.ShareAccess", share_access, 0x0, 0x0, false, 0x84ef1b4ae3c648d8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.FileAttributes", file_attributes, 0x0, 0x0, false, 0x8f41d7326e802aa2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.CreateDisposition", create_disposition, 0x0, 0x0, false, 0x11183ead619b7d94)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.CreateOptions", create_options, 0x0, 0x0, false, 0x2d444a67b586f616)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xdbbcacbdf66da669)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x6ccd69edfb799f28)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.AllocationSize", allocation_size, 0x0, 0x0, false, 0x2d4eb1a0399d7c21)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.FileInformation", file_information, 0x0, 0x0, false, 0x10704f8c41cb3e99)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_13.FileName", file_name, 0x0, 0x0, false, 0x11ac46ac0eb513ae)
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
#define _m17
#endif