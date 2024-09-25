#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "UnmarshalerCLSIDInfo._clsid", clsid, 0x0, 0x80, true, 0x62bdf95216450795)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bCheckedSystemTrusted", b_checked_system_trusted, 0x80, 0x8, true, 0x65c7c4274a42d4e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bIsSystemTrusted", b_is_system_trusted, 0x88, 0x8, true, 0x3baf8e492d7dcc61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bCheckedCATID_MARSHALER", b_checked_catid_marshaler, 0x90, 0x8, true, 0x13c12f867b90267d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bHasCATID_MARSHALER", b_has_catid_marshaler, 0x98, 0x8, true, 0xdf824c3112060257)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bCheckedIsPerProcessAllowed", b_checked_is_per_process_allowed, 0xa0, 0x8, true, 0x520300efdd49a5b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bIsPerProcessAllowed", b_is_per_process_allowed, 0xa8, 0x8, true, 0xce696d097e1b6ec1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._bNeedsMemoization", b_needs_memoization, 0xb0, 0x8, true, 0xe064174ef8c02152)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnmarshalerCLSIDInfo._reportedToTelemetry", reported_to_telemetry, 0xb8, 0x8, true, 0x38b4a8fad6abadf3)
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
#endif