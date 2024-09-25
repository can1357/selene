#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_DEFERRED_WRITE.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xaa3cb683a9b9c0c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_DEFERRED_WRITE.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0x4fa7796e648f2e4c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_DEFERRED_WRITE.FileObject", file_object, 0x40, 0x40, true, 0x15616fb4896e22ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEFERRED_WRITE.BytesToWrite", bytes_to_write, 0x80, 0x20, true, 0x25638c2720c30fea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEFERRED_WRITE.DeferredWriteLinks", deferred_write_links, 0xc0, 0x80, true, 0x596c54610e3b8ec1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_DEFERRED_WRITE.Event", event, 0x140, 0x40, true, 0xeb9f183493d7a456)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_DEFERRED_WRITE.PostRoutine", post_routine, 0x180, 0x40, true, 0x8c62d1ac2e9f15a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEFERRED_WRITE.Context1", context1, 0x1c0, 0x40, true, 0xea0e78751e75ea6e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEFERRED_WRITE.Context2", context2, 0x200, 0x40, true, 0xc5a3574b235994f2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_DEFERRED_WRITE.Partition", partition, 0x240, 0x40, true, 0xfd5181d5b96fff4f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEFERRED_WRITE.SoftThrottle", soft_throttle, 0x280, 0x8, true, 0x81ae449f832f3f27)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEFERRED_WRITE.TimeAdded", time_added, 0x2c0, 0x40, true, 0x53645d21d5fb19a1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_DEFERRED_WRITE.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0x20c0e7328d0098cc)
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