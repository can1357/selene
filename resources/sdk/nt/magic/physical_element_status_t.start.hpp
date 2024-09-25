#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS.Version", version, 0x0, 0x20, true, 0xb314bbfae6ce9be5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS.Size", size, 0x20, 0x20, true, 0xc90c3faeaac6a8a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS.DescriptorCount", descriptor_count, 0x40, 0x20, true, 0x82d7244373e5da4f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS.ReturnedDescriptorCount", returned_descriptor_count, 0x60, 0x20, true, 0xc1a639ec34fc1149)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS.ElementIdentifierBeingDepoped", element_identifier_being_depoped, 0x80, 0x20, true, 0xabefd05cedc7d1de)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_element_status_descriptor_t, 1>), "_PHYSICAL_ELEMENT_STATUS.Descriptors", descriptors, 0xc0, 0x40, true, 0xe89fe2d6a60e8719)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif