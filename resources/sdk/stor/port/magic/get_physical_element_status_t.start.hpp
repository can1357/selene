#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_PHYSICAL_ELEMENT_STATUS.OperationCode", operation_code, 0x0, 0x8, true, 0x1ebcb1b655c6004b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_GET_PHYSICAL_ELEMENT_STATUS.ServiceAction", service_action, 0x8, 0x5, true, 0xaaead47892f4deac, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_GET_PHYSICAL_ELEMENT_STATUS.StartingElement", starting_element, 0x30, 0x20, true, 0xc86e66ee9267b9dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_GET_PHYSICAL_ELEMENT_STATUS.AllocationLength", allocation_length, 0x50, 0x20, true, 0xef788996efcf2989)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_GET_PHYSICAL_ELEMENT_STATUS.ReportType", report_type, 0x70, 0x4, true, 0xbfbbdbb1efff409e, 4, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_GET_PHYSICAL_ELEMENT_STATUS.Filter", filter, 0x76, 0x2, true, 0x146575cb31f6a9ae, 2, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_PHYSICAL_ELEMENT_STATUS.Control", control, 0x78, 0x8, true, 0xfc0d4880a1e98d35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif