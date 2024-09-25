#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FS_FILTER_CALLBACK_DATA.SizeOfFsFilterCallbackData", size_of_fs_filter_callback_data, 0x0, 0x20, true, 0x30f5c563b8c2fe14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FS_FILTER_CALLBACK_DATA.Operation", operation, 0x20, 0x8, true, 0x10f749e754520a9b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FS_FILTER_CALLBACK_DATA.DeviceObject", device_object, 0x40, 0x40, true, 0x5545b2786dc84a46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_FS_FILTER_CALLBACK_DATA.FileObject", file_object, 0x80, 0x40, true, 0x85f0e8d7cf7b9ce5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union fs::filter_parameters_t), "_FS_FILTER_CALLBACK_DATA.Parameters", parameters, 0xc0, 0x40, true, 0xe9fae306730f12a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif