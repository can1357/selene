#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OFFLOAD_READ_OUTPUT.OffloadReadFlags", offload_read_flags, 0x0, 0x20, true, 0x9c528ffcda0372a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_OFFLOAD_READ_OUTPUT.LengthProtected", length_protected, 0x40, 0x40, true, 0xf941dbc13b1beba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OFFLOAD_READ_OUTPUT.TokenLength", token_length, 0x80, 0x20, true, 0x52362376cec868d5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_offload_token_t), "_STORAGE_OFFLOAD_READ_OUTPUT.Token", token, 0xa0, 0x0, true, 0x45ab9a87e3b8f080)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif