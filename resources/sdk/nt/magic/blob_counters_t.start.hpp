#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BLOB_COUNTERS.CreatedObjects", created_objects, 0x0, 0x20, true, 0x45e4c5b18dc1ace9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BLOB_COUNTERS.DeletedObjects", deleted_objects, 0x20, 0x20, true, 0x7f1ef40946a5b2e)
#else
#define _m00
#define _m01
#endif