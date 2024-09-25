#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t()>*), "_NTOS_TEST_EXPORT_INTERFACE.ExIsTestExportExtensionRegistered", ex_is_test_export_extension_registered, 0x0, 0x0, false, 0x5734eb4d9bfb5282)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcm_save_key_to_buffer_t ), "_NTOS_TEST_EXPORT_INTERFACE.CmSaveKeyToBuffer", cm_save_key_to_buffer, 0x0, 0x0, false, 0x7770f532391e9df7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcm_open_key_for_bug_check_recovery_t ), "_NTOS_TEST_EXPORT_INTERFACE.CmOpenKeyForBugCheckRecovery", cm_open_key_for_bug_check_recovery, 0x0, 0x0, false, 0x4791253dad0e4ed9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pps_allocate_test_tls_slot_t ), "_NTOS_TEST_EXPORT_INTERFACE.PsTlsTestAlloc", ps_tls_test_alloc, 0x0, 0x0, false, 0x86851e7e427213c2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pdpc_test_query_watchdog_configuration_t ), "_NTOS_TEST_EXPORT_INTERFACE.KeDpcTestQueryWatchdogConfiguration", ke_dpc_test_query_watchdog_configuration, 0x0, 0x0, false, 0x361d6aaa245a5398)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(psvc_test_call_sk_svc_t ), "_NTOS_TEST_EXPORT_INTERFACE.CallSkSvc", call_sk_svc, 0x0, 0x0, false, 0x579ce341cdf03ba6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif