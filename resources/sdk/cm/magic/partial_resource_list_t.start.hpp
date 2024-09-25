#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_LIST.Version", version, 0x0, 0x10, true, 0x4c59ef5d749a186b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_LIST.Revision", revision, 0x10, 0x10, true, 0x173364c1164c543b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_LIST.Count", count, 0x20, 0x20, true, 0x3eaf29a2dfeb772f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::partial_resource_descriptor_t, 1>), "_CM_PARTIAL_RESOURCE_LIST.PartialDescriptors", partial_descriptors, 0x40, 0xa0, true, 0x3078e0d159fbc0de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif