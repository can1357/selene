#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullTransmittedFrameCount", ull_transmitted_frame_count, 0x0, 0x40, true, 0xe599d5dabf60ba34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullReceivedFrameCount", ull_received_frame_count, 0x40, 0x40, true, 0x5c8c8b42e0c2126a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullTransmittedFailureFrameCount", ull_transmitted_failure_frame_count, 0x80, 0x40, true, 0x5bd2bad3fdbb9047)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullReceivedFailureFrameCount", ull_received_failure_frame_count, 0xc0, 0x40, true, 0x4c64c35bd48a5c64)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullWEPExcludedCount", ull_wep_excluded_count, 0x100, 0x40, true, 0xa8109e30588a9dc5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullTKIPLocalMICFailures", ull_tkip_local_mic_failures, 0x140, 0x40, true, 0xab6d6a1ed3942b42)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullTKIPReplays", ull_tkip_replays, 0x180, 0x40, true, 0x4d2313e03c0f19a5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullTKIPICVErrorCount", ull_tkipicv_error_count, 0x1c0, 0x40, true, 0x3f4bd34432c10c0d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullCCMPReplays", ull_ccmp_replays, 0x200, 0x40, true, 0xcfc31ee522f8cf59)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullCCMPDecryptErrors", ull_ccmp_decrypt_errors, 0x240, 0x40, true, 0xd295fd5daa3db54a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullWEPUndecryptableCount", ull_wep_undecryptable_count, 0x280, 0x40, true, 0x19a2a6de75f59939)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullWEPICVErrorCount", ull_wepicv_error_count, 0x2c0, 0x40, true, 0x8377f875798e488)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullDecryptSuccessCount", ull_decrypt_success_count, 0x300, 0x40, true, 0x5d2d9326daf3e1f9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DOT11_MAC_FRAME_STATISTICS.ullDecryptFailureCount", ull_decrypt_failure_count, 0x340, 0x40, true, 0xeb97f546b151568c)
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
#define _m13
#endif