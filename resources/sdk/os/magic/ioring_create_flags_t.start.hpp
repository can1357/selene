#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_create_required_flags_t), "_NT_IORING_CREATE_FLAGS.Required", required, 0x0, 0x0, false, 0xd21f3c3010158476)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_create_advisory_flags_t), "_NT_IORING_CREATE_FLAGS.Advisory", advisory, 0x0, 0x0, false, 0xe8d7b3d7bd465315)
#else
#define _m00
#define _m01
#endif