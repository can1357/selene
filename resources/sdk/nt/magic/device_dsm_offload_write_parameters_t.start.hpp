#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS.Flags", flags, 0x0, 0x20, true, 0x9dd86490d9f2343b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS.TokenOffset", token_offset, 0x40, 0x40, true, 0x7570cab90c64e2eb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_offload_token_t), "_DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS.Token", token, 0x80, 0x0, true, 0x63b2709f3711eb9b)
#else
#define _m00
#define _m01
#define _m02
#endif