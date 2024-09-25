#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_BASIC_INFORMATION.Flags", flags, 0x0, 0x20, true, 0x254c0bf26f12c869)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_BASIC_INFORMATION.SequenceNo", sequence_no, 0x20, 0x20, true, 0xd9f29906e43a990d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ALPC_BASIC_INFORMATION.PortContext", port_context, 0x40, 0x40, true, 0xb6e3033ddd597082)
#else
#define _m00
#define _m01
#define _m02
#endif