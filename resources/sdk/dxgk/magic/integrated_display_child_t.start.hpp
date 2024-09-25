#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_INTEGRATED_DISPLAY_CHILD.InterfaceTechnology", interface_technology, 0x0, 0x20, true, 0xe802b76fc8d92090)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_INTEGRATED_DISPLAY_CHILD.DescriptorLength", descriptor_length, 0x20, 0x10, true, 0xea26031053ef6d51)
#else
#define _m00
#define _m01
#endif