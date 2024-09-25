#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TRACE_RUNDOWN_NOTIFICATION.Version", version, 0x0, 0x20, true, 0x3682a4e75cb742c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TRACE_RUNDOWN_NOTIFICATION.LoggerId", logger_id, 0x20, 0x20, true, 0x7649277035737435)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TRACE_RUNDOWN_NOTIFICATION.Flags", flags, 0x80, 0x20, true, 0x533c8569e49b7e44)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_WMI_TRACE_RUNDOWN_NOTIFICATION.Silo", silo, 0x40, 0x40, true, 0xcd42654d66f332aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif