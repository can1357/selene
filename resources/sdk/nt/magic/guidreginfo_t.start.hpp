#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "GUIDREGINFO.Guid", guid, 0x0, 0x80, true, 0xab767cbd4efcc559)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "GUIDREGINFO.InstanceCount", instance_count, 0x80, 0x20, true, 0xf24346016285aed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "GUIDREGINFO.Flags", flags, 0xa0, 0x20, true, 0x49769dc9d6b3abe)
#else
#define _m00
#define _m01
#define _m02
#endif