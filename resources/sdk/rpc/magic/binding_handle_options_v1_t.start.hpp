#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_OPTIONS_V1.Version", version, 0x0, 0x20, true, 0xf9b82685e362efba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_OPTIONS_V1.Flags", flags, 0x20, 0x20, true, 0x6c3a4a4cc0fca0e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_OPTIONS_V1.ComTimeout", com_timeout, 0x40, 0x20, true, 0x6de1499e2689fdab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_HANDLE_OPTIONS_V1.CallTimeout", call_timeout, 0x60, 0x20, true, 0x2b3938351cc73a85)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif