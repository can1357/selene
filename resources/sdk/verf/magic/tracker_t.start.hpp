#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TRACKER.TrackerFlags", tracker_flags, 0x0, 0x20, true, 0x34945dbd8db3c65c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TRACKER.TrackerSize", tracker_size, 0x20, 0x20, true, 0x74c2c2024d3bbbaf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TRACKER.TrackerIndex", tracker_index, 0x40, 0x20, true, 0xb699e36caf6fae76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TRACKER.TraceDepth", trace_depth, 0x60, 0x20, true, 0x5e7ec5c32be38729)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif