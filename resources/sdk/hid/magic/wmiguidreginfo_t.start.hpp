#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_WMIGUIDREGINFO.Guid", guid, 0x0, 0x40, true, 0xb1949de021d3e1a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMIGUIDREGINFO.InstanceCount", instance_count, 0x40, 0x20, true, 0xc91abee8aa4d1c88)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMIGUIDREGINFO.Flags", flags, 0x60, 0x20, true, 0x26fd596a9fe9ca5d)
#else
#define _m00
#define _m01
#define _m02
#endif