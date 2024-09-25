#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.Size", size, 0x0, 0x20, true, 0x831cdbbb23634264)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS.Type", type, 0x20, 0x20, true, 0x2b855588fc661040)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x40, 0x40, true, 0x720a83cd2dc5cb05)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x80, 0x40, true, 0xacafbba73b6cbe92)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0xc0, 0x40, true, 0x1a1592b4fff34fb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS.TargetDeviceObject", target_device_object, 0x100, 0x40, true, 0xb4c347d071e1e83b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS.TargetFileObject", target_file_object, 0x140, 0x40, true, 0x97a86b748feb7256)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS.TargetDeviceName", target_device_name, 0x180, 0x80, true, 0x62974f02cf3fb192)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.DesiredAccess", desired_access, 0x200, 0x20, true, 0x30e279379acaf521)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.ShareAccess", share_access, 0x220, 0x20, true, 0xfd78516252e113ba)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.FileAttributes", file_attributes, 0x240, 0x20, true, 0xa1309bc2b1f468aa)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.CreateDisposition", create_disposition, 0x260, 0x20, true, 0x699099daa1a4e2f9)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.CreateOptions", create_options, 0x280, 0x20, true, 0xe07e18fddb5127d7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS.EaBuffer", ea_buffer, 0x2c0, 0x40, true, 0x1d95e06638415ab3)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.EaBufferLength", ea_buffer_length, 0x300, 0x20, true, 0x5d0dd5e064caa546)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS.AllocationSize", allocation_size, 0x340, 0x40, true, 0x36e9e445771a0a86)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS.FileInformation", file_information, 0x380, 0x20, true, 0x1fd17f0b182c76de)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS.FileName", file_name, 0x3c0, 0x80, true, 0x52166935e9676269)
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