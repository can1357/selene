#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_TYPE_NOTIFICATION_INPUT.Flags", flags, 0x0, 0x20, true, 0xafa0d365c681935b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_TYPE_NOTIFICATION_INPUT.NumFileTypeIDs", num_file_type_i_ds, 0x20, 0x20, true, 0x68da9ef30a7b24b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_FILE_TYPE_NOTIFICATION_INPUT.FileTypeID", file_type_id, 0x40, 0x80, true, 0x364624fa36e66bee)
#else
#define _m00
#define _m01
#define _m02
#endif