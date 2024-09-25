#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxIoTargetRemoveOpenParams.TargetDeviceName", target_device_name, 0x0, 0x80, true, 0x905fe262c050729f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "FxIoTargetRemoveOpenParams.OpenType", open_type, 0x80, 0x20, true, 0x1689c920cb102655)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.DesiredAccess", desired_access, 0xa0, 0x20, true, 0x6244cf397ff43f7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.ShareAccess", share_access, 0xc0, 0x20, true, 0x8898b958b695d989)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.FileAttributes", file_attributes, 0xe0, 0x20, true, 0x5351a4a04f91afee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.CreateDisposition", create_disposition, 0x100, 0x20, true, 0x1d69e879263631f4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.CreateOptions", create_options, 0x120, 0x20, true, 0xe5a28772f69fa38a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoTargetRemoveOpenParams.EaBuffer", ea_buffer, 0x140, 0x40, true, 0x570d8a4a745ca8bc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoTargetRemoveOpenParams.EaBufferLength", ea_buffer_length, 0x180, 0x20, true, 0xa26630a4a18be5ae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "FxIoTargetRemoveOpenParams.AllocationSize", allocation_size, 0x1c0, 0x40, true, 0xcc11370e04ed9a6d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "FxIoTargetRemoveOpenParams.AllocationSizePointer", allocation_size_pointer, 0x200, 0x40, true, 0x3b32f6a050fd2eeb)
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
#endif