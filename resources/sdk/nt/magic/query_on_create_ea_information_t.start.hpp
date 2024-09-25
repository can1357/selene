#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_EA_INFORMATION.EaBufferSize", ea_buffer_size, 0x0, 0x20, true, 0x22313d51fb0f0ecc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_full_ea_information_t*), "_QUERY_ON_CREATE_EA_INFORMATION.EaBuffer", ea_buffer, 0x40, 0x40, true, 0xa1a44d1220cec3db)
#else
#define _m00
#define _m01
#endif