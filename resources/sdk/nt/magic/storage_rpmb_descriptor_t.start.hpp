#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RPMB_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x6116902a9f1def8d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RPMB_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x319773136161551e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RPMB_DESCRIPTOR.SizeInBytes", size_in_bytes, 0x40, 0x20, true, 0x86663a3c89f7084e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_RPMB_DESCRIPTOR.MaxReliableWriteSizeInBytes", max_reliable_write_size_in_bytes, 0x60, 0x20, true, 0xcccee24c98b3a122)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_rpmb_frame_type_t), "_STORAGE_RPMB_DESCRIPTOR.FrameFormat", frame_format, 0x80, 0x20, true, 0x21c58d6e3489722)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif