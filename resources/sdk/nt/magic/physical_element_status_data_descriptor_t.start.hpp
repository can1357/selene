#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR.ElementIdentifier", element_identifier, 0x20, 0x20, true, 0x99fc40a1a4f64990)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR.PhysicalElementType", physical_element_type, 0x70, 0x8, true, 0xac3f2dc14faddac9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR.PhysicalElementHealth", physical_element_health, 0x78, 0x8, true, 0xcece94cb94d8f29f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_PHYSICAL_ELEMENT_STATUS_DATA_DESCRIPTOR.AssociatedCapacity", associated_capacity, 0x80, 0x40, true, 0x9bf347d6b614eaf2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif