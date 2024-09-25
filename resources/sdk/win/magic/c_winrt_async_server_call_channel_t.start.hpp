#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CWinrtAsyncServerCallChannel._procNum", proc_num, 0x40, 0x10, true, 0x9923c21f24515e49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<const struct nt::guid_t&, const struct nt::guid_t>), "CWinrtAsyncServerCallChannel._iid", iid, 0x60, 0x80, true, 0x3599ac6716ee3a26)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CWinrtAsyncServerCallChannel._passthroughTraceActivity", passthrough_trace_activity, 0xe0, 0x80, true, 0xc7a6fe5a6bd1ca7d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const bool), "CWinrtAsyncServerCallChannel._enableCallTracing", enable_call_tracing, 0x160, 0x8, true, 0xc0f7da8eb3aa6a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::com_call_trace_activity_t const*), "CWinrtAsyncServerCallChannel._callTraceActivity", call_trace_activity, 0x180, 0x40, true, 0xd9451ed33292c5cc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CWinrtAsyncServerCallChannel._callId", call_id, 0x1c0, 0x80, true, 0x14eda084a0e82106)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CWinrtAsyncServerCallChannel._clientPid", client_pid, 0x240, 0x20, true, 0xa1f7937d2f495bf6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_this_t const*), "CWinrtAsyncServerCallChannel._orpcThis", orpc_this, 0x280, 0x40, true, 0xa40d91c153560dfb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CWinrtAsyncServerCallChannel._sizeOfOrpcThis", size_of_orpc_this, 0x2c0, 0x20, true, 0xe56af82665d9a3cc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_local_this_t const*), "CWinrtAsyncServerCallChannel._localThis", local_this, 0x300, 0x40, true, 0x5a5e74014870e664)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CWinrtAsyncServerCallChannel._sizeOfLocalThis", size_of_local_this, 0x340, 0x20, true, 0x9aefed227b418fea)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void const*), "CWinrtAsyncServerCallChannel._requestStubData", request_stub_data, 0x380, 0x40, true, 0x2fba4e4dab0553e2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CWinrtAsyncServerCallChannel._sizeOfRequestStubData", size_of_request_stub_data, 0x3c0, 0x20, true, 0x3d7aeba1560d31ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif