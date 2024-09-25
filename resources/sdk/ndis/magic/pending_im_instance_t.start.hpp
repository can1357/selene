#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pending_im_instance_t*), "_NDIS_PENDING_IM_INSTANCE.Next", next, 0x0, 0x40, true, 0xb2838dfb029004d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PENDING_IM_INSTANCE.Context", context, 0x40, 0x40, true, 0x2f2e4f3121267fbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_PENDING_IM_INSTANCE.Name", name, 0x80, 0x80, true, 0xf06170c3b17aaf3f)
#else
#define _m00
#define _m01
#define _m02
#endif