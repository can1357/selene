#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CREATE_REDIRECTION_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0x1bae384a6e5bcaff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CREATE_REDIRECTION_ECP_CONTEXT.Flags", flags, 0x10, 0x10, true, 0x1084cccd77e9fcad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_CREATE_REDIRECTION_ECP_CONTEXT.FileId", file_id, 0x20, 0x80, true, 0xf7f0a5a9d550a7bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CREATE_REDIRECTION_ECP_CONTEXT.VolumeGuid", volume_guid, 0xa0, 0x80, true, 0x6811590dc89f996c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif