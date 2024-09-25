#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ldr::service_tag_record_t*), "_LDR_SERVICE_TAG_RECORD.Next", next, 0x0, 0x40, true, 0x2c18be37d1913fc2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LDR_SERVICE_TAG_RECORD.ServiceTag", service_tag, 0x40, 0x20, true, 0x34fc3cc870419d98)
#else
#define _m00
#define _m01
#endif