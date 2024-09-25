#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::termination_port_t*), "_TERMINATION_PORT.Next", next, 0x0, 0x40, true, 0x881805c4cc5ef01a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TERMINATION_PORT.Port", port, 0x40, 0x40, true, 0x69742a8c5d239143)
#else
#define _m00
#define _m01
#endif