#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.Preallocated", preallocated, 0x0, 0x1, true, 0x8922aac88c6c5f73, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.FromPersistentStore", from_persistent_store, 0x1, 0x1, true, 0xb019fb12aef03947, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.PlatformPfaControl", platform_pfa_control, 0x2, 0x1, true, 0xebdb001171f8fa1b, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.PlatformDirectedOffline", platform_directed_offline, 0x3, 0x1, true, 0x5446f224aabf8492, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0x481ceb38b2ba812b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif