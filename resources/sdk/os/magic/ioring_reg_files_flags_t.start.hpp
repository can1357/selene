#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_reg_files_req_flags_t), "_NT_IORING_REG_FILES_FLAGS.Required", required, 0x0, 0x0, false, 0x6476ac0c3a2e412c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_reg_files_adv_flags_t), "_NT_IORING_REG_FILES_FLAGS.Advisory", advisory, 0x0, 0x0, false, 0xcb25976322a0ad29)
#else
#define _m00
#define _m01
#endif