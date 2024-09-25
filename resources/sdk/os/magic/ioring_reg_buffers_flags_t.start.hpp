#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_reg_buffers_req_flags_t), "_NT_IORING_REG_BUFFERS_FLAGS.Required", required, 0x0, 0x0, false, 0x7e789a524ccc749a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum os::ioring_reg_buffers_adv_flags_t), "_NT_IORING_REG_BUFFERS_FLAGS.Advisory", advisory, 0x0, 0x0, false, 0x66add0451b6d648f)
#else
#define _m00
#define _m01
#endif