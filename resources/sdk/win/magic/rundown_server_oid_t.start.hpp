#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "RundownServerOID.oid", oid, 0x0, 0x40, true, 0x349e5e4a18cffcbc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "RundownServerOID.implementedInterface", implemented_interface, 0x40, 0x80, true, 0xd2b5cd08977fc197)
#else
#define _m00
#define _m01
#endif