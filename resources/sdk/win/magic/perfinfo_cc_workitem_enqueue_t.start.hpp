#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_WORKITEM_ENQUEUE.WorkItemKey", work_item_key, 0x0, 0x40, true, 0x2663cd9987beecda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_WORKITEM_ENQUEUE.FileObjectKey", file_object_key, 0x40, 0x40, true, 0xc67630764a1744cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_CC_WORKITEM_ENQUEUE.QueueType", queue_type, 0x80, 0x8, true, 0x5fc180fb27c4d12)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_CC_WORKITEM_ENQUEUE.WorkItemType", work_item_type, 0x88, 0x8, true, 0x8632345bd6be197b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_CC_WORKITEM_ENQUEUE.Requeue", requeue, 0x90, 0x8, true, 0x647dcc432ade8682)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif