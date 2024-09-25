#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_OFFLOAD_WRITE_OUTPUT.OffloadWriteFlags", offload_write_flags, 0x0, 0x20, true, 0xd81262518b6980a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_OFFLOAD_WRITE_OUTPUT.LengthCopied", length_copied, 0x40, 0x40, true, 0x7b2acfa0f4202c68)
#else
#define _m00
#define _m01
#endif