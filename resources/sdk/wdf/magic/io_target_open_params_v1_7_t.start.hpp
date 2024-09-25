#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0x3576f5c1b20105e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.Type", type, 0x0, 0x0, false, 0xd62b1e1f6f990bb5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0xf5370243df676474)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0xae6c183b6bd8ade1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0x80612e5962440746)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0x2d70033163f1dabc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.TargetFileObject", target_file_object, 0x0, 0x0, false, 0xb5ed8fbe1ad74be9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x983133cd31585eae)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.DesiredAccess", desired_access, 0x0, 0x0, false, 0xc2d35e72af3fad1a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.ShareAccess", share_access, 0x0, 0x0, false, 0xb1d985cbd2af4073)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.FileAttributes", file_attributes, 0x0, 0x0, false, 0x96a1a730850883d1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.CreateDisposition", create_disposition, 0x0, 0x0, false, 0x9c3baa9807d0df39)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.CreateOptions", create_options, 0x0, 0x0, false, 0xa89aa56d42d48aff)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xfdc32d256a3b0680)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0xe5d2887a670f7909)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.AllocationSize", allocation_size, 0x0, 0x0, false, 0xcbf0b48e267c3b84)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_7.FileInformation", file_information, 0x0, 0x0, false, 0x717a67809638d5c1)
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