#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x56bae6b3b18e9629)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xe69fb34689d84a9c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.ElementIdentifier", element_identifier, 0x40, 0x20, true, 0xdfd1f35d6f69aa25)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.PhysicalElementType", physical_element_type, 0x60, 0x8, true, 0xc31e9d39fe325503)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.PhysicalElementHealth", physical_element_health, 0x68, 0x8, true, 0x78d1d32554581778)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_ELEMENT_STATUS_DESCRIPTOR.AssociatedCapacity", associated_capacity, 0x80, 0x40, true, 0x9da9c158af74593)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif