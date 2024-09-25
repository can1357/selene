#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.FileAttributes", file_attributes, 0x0, 0x20, true, 0x6b45b253d14b289a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_CONTAINER_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x9ff6551d368b6621)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_CONTAINER_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xbb02328b08c161d5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_CONTAINER_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x7485d5d341ef1ccc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLS_CONTAINER_INFORMATION.ContainerSize", container_size, 0x100, 0x40, true, 0x43425a36dbb49190)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.FileNameActualLength", file_name_actual_length, 0x140, 0x20, true, 0xbf517c2a0827b01e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.FileNameLength", file_name_length, 0x160, 0x20, true, 0xd98d67dca7114938)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_CLS_CONTAINER_INFORMATION.FileName", file_name, 0x180, 0x0, true, 0xb61fff65792691d4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.State", state, 0x1180, 0x20, true, 0xfa20c3fa299e4155)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.PhysicalContainerId", physical_container_id, 0x11a0, 0x20, true, 0xb14aed9e957da5f9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_CONTAINER_INFORMATION.LogicalContainerId", logical_container_id, 0x11c0, 0x20, true, 0xc8b9adaf82f19e26)
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