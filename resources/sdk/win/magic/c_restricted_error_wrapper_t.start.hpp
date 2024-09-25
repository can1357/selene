#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper._pszDescription", psz_description, 0x280, 0x40, true, 0xee53a1487713cc55)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper._pszRestrictedDescription", psz_restricted_description, 0x2c0, 0x40, true, 0x385bafae19950770)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper._pszCapabilitySid", psz_capability_sid, 0x300, 0x40, true, 0x2910f3777e717dbd)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "CRestrictedErrorWrapper._hrError", hr_error, 0x340, 0x20, true, 0x6dc08337c18744aa)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper._pszSectionName", psz_section_name, 0x380, 0x40, true, 0xb623df86b8208f44)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRestrictedErrorWrapper._hSection", h_section, 0x3c0, 0x40, true, 0x686d1e2d8ae2428d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedErrorWrapper._dwVersion", dw_version, 0x400, 0x20, true, 0x738572206d73e277)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedErrorWrapper._cStackBackTrace", c_stack_back_trace, 0x420, 0x10, true, 0xdc81a9a3746e009)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "CRestrictedErrorWrapper._ppvStackBackTrace", ppv_stack_back_trace, 0x440, 0x40, true, 0x49f2929e1f760f37)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedErrorWrapper._stackBackTracePointerSize", stack_back_trace_pointer_size, 0x480, 0x10, true, 0x8716399bed5c5901)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::stowed_exception_information_v2_t), "CRestrictedErrorWrapper._stowedExceptionInformation", stowed_exception_information, 0x4c0, 0xc0, true, 0x56af15a6d0e7e9c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedErrorWrapper._dwOriginatingProcessId", dw_originating_process_id, 0x30c0, 0x20, true, 0x68c22facd40f845c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedErrorWrapper._dwDestinationProcessId", dw_destination_process_id, 0x30e0, 0x20, true, 0xf04ca0ec53febb38)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CRestrictedErrorWrapper._fUseBaseClassMarshaling", f_use_base_class_marshaling, 0x3100, 0x8, true, 0xa27890153897b76c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::process_t), "CRestrictedErrorWrapper._shTargetProcess", sh_target_process, 0x3140, 0x80, true, 0x690b90ac64470906)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CRestrictedErrorWrapper._correlationId", correlation_id, 0x6c0, 0x80, true, 0x91a44d8f52d5536e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRestrictedErrorWrapper._bIsTransformed", b_is_transformed, 0x7c0, 0x20, true, 0x5961aaa2b4d5e47b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRestrictedErrorWrapper._bRestrictMarshalingData", b_restrict_marshaling_data, 0x7e0, 0x20, true, 0x787db444e7521cba)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CRestrictedErrorWrapper._numPropagations", num_propagations, 0x800, 0x10, true, 0x5624270df8ed22cb)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper._pszSignature", psz_signature, 0x840, 0x40, true, 0x30dbd40af9a2c80)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper.m_pofProcessName", m_pof_process_name, 0x880, 0x40, true, 0x8cb742f04a2526b6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CRestrictedErrorWrapper.m_pofStackText", m_pof_stack_text, 0x8c0, 0x40, true, 0x464fad85d2363d5a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hpss_t*), "CRestrictedErrorWrapper._snapshotHandle", snapshot_handle, 0x940, 0x40, true, 0x75f0750b920f9bb7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "CRestrictedErrorWrapper._snapshotContext", snapshot_context, 0x980, 0x80, true, 0x39d8e3c5ef02aa67)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CRestrictedErrorWrapper._snashpotThreadId", snashpot_thread_id, 0x3000, 0x20, true, 0x11ba36229f278c68)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CRestrictedErrorWrapper._snapshotReturnAddress", snapshot_return_address, 0x3040, 0x40, true, 0xd093e94389d295d2)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::timer_t*), "CRestrictedErrorWrapper._pSnapshotCleanupTimer", p_snapshot_cleanup_timer, 0x3080, 0x40, true, 0xd678b3231e076426)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif