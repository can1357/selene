#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY.Flags", flags, 0x0, 0x20, true, 0x2b8e9481e9f17549)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY.RaiseExceptionOnInvalidHandleReference", raise_exception_on_invalid_handle_reference, 0x0, 0x1, true, 0xe9ff0991923fecc2, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY.HandleExceptionsPermanentlyEnabled", handle_exceptions_permanently_enabled, 0x1, 0x1, true, 0xd16985bdfa0f9e4b, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif