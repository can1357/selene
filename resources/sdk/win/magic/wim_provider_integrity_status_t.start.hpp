#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WIM_PROVIDER_INTEGRITY_STATUS.IntegrityComplete", integrity_complete, 0x0, 0x8, true, 0x9e51b6b338691c48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WIM_PROVIDER_INTEGRITY_STATUS.IntegrityRunning", integrity_running, 0x8, 0x8, true, 0xa29c8a5fad2590cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WIM_PROVIDER_INTEGRITY_STATUS.IntegrityAvailable", integrity_available, 0x40, 0x40, true, 0x3e080bce06aab1ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WIM_PROVIDER_INTEGRITY_STATUS.IntegrityRequired", integrity_required, 0x80, 0x40, true, 0x1a45a2f54bb32dde)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif