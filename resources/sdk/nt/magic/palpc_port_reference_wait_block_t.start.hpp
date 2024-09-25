#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PALPC_PORT_REFERENCE_WAIT_BLOCK.DesiredReferenceNoEvent", desired_reference_no_event, 0x0, 0xc0, true, 0x27947e93b654f8ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PALPC_PORT_REFERENCE_WAIT_BLOCK.DesiredReferenceNo", desired_reference_no, 0xc0, 0x20, true, 0x1f16a589c191c9e3)
#else
#define _m00
#define _m01
#endif