#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksdevice_dispatch_t*), "_KSDEVICE_DESCRIPTOR.Dispatch", dispatch, 0x0, 0x0, false, 0xfd7ecfcde7bf6183)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSDEVICE_DESCRIPTOR.FilterDescriptorsCount", filter_descriptors_count, 0x0, 0x0, false, 0xf349fc6b91a316df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfilter_descriptor_t const**), "_KSDEVICE_DESCRIPTOR.FilterDescriptors", filter_descriptors, 0x0, 0x0, false, 0x78c36c1120feebd1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSDEVICE_DESCRIPTOR.Version", version, 0x0, 0x0, false, 0xa00aa94af4f27655)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSDEVICE_DESCRIPTOR.Flags", flags, 0x0, 0x0, false, 0xb7f1d7ccdb9e819)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif