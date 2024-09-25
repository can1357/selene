#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_instance_t), "_MMSUPPORT_FULL.Instance", instance, 0x0, 0x0, true, 0xf3bbe0beb4907d86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_shared_t), "_MMSUPPORT_FULL.Shared", shared, 0x600, 0x0, true, 0xe13a27d187f677d2)
#else
#define _m00
#define _m01
#endif