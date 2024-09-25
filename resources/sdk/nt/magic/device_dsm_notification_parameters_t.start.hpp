#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_NOTIFICATION_PARAMETERS.Size", size, 0x0, 0x20, true, 0x84419aa27d3ff048)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_NOTIFICATION_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xdeafec0e51504e2f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_NOTIFICATION_PARAMETERS.NumFileTypeIDs", num_file_type_i_ds, 0x40, 0x20, true, 0x4c4d5b6c2e5ef180)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_DEVICE_DSM_NOTIFICATION_PARAMETERS.FileTypeID", file_type_id, 0x60, 0x80, true, 0x9ae602a42469de23)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif