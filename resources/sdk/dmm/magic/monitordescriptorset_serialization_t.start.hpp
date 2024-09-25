#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DMM_MONITORDESCRIPTORSET_SERIALIZATION.NumDescriptors", num_descriptors, 0x0, 0x8, true, 0xe2155c3832235280)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct dmm::monitordescriptor_serialization_t, 1>), "_DMM_MONITORDESCRIPTORSET_SERIALIZATION.DescriptorSerialization", descriptor_serialization, 0x20, 0x60, true, 0x5bd287114357eb65)
#else
#define _m00
#define _m01
#endif