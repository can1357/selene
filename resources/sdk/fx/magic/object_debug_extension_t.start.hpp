#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::tag_tracker_t*), "FxObjectDebugExtension.TagTracker", tag_tracker, 0x0, 0x40, true, 0xdf308d332be63357)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxObjectDebugExtension.VerifierLock", verifier_lock, 0x40, 0x40, true, 0xc42460d3ebd2f1f2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "FxObjectDebugExtension.StateHistory", state_history, 0x80, 0x40, true, 0x624c8f87a56798de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxObjectDebugExtension.StateHistoryIndex", state_history_index, 0xc0, 0x20, true, 0x7d6b6f3c4aceac02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxObjectDebugExtension.Signature", signature, 0x100, 0x20, true, 0xaa486c5bca4587bc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "FxObjectDebugExtension.AllocationStart", allocation_start, 0x180, 0x20, true, 0xebb142d998328b13)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxObjectDebugExtension.ObjectCounted", object_counted, 0xe0, 0x8, true, 0x978ffef6155bedef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif