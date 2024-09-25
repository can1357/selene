#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "_FLT_RELATED_OBJECTS.Size", size, 0x0, 0x10, true, 0x9bc3c720c85492a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "_FLT_RELATED_OBJECTS.TransactionContext", transaction_context, 0x10, 0x10, true, 0xa4a8dd08ea624062)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_filter_t const*), "_FLT_RELATED_OBJECTS.Filter", filter, 0x40, 0x40, true, 0xc34e8cf84e58e27f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t const*), "_FLT_RELATED_OBJECTS.Volume", volume, 0x80, 0x40, true, 0xd85aa577a394463d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t const*), "_FLT_RELATED_OBJECTS.Instance", instance, 0xc0, 0x40, true, 0xfb2c16fdb99fa866)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t const*), "_FLT_RELATED_OBJECTS.FileObject", file_object, 0x100, 0x40, true, 0x2812c4754df3de0c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktransaction_t const*), "_FLT_RELATED_OBJECTS.Transaction", transaction, 0x140, 0x40, true, 0xda275ca59a1b14c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif