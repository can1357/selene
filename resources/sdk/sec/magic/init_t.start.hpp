#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::string_t*), "SecurityInit.Sddl", sddl, 0x0, 0x40, true, 0xe67ad4a005abe8b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "SecurityInit.DeviceClass", device_class, 0x40, 0x80, true, 0x5225479c5f081be3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SecurityInit.DeviceClassSet", device_class_set, 0xc0, 0x8, true, 0xb3a77cdb21880b93)
#else
#define _m00
#define _m01
#define _m02
#endif