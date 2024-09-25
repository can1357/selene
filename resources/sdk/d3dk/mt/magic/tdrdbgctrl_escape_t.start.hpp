#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::tdrdbgctrltype_t), "_D3DKMT_TDRDBGCTRL_ESCAPE.TdrControl", tdr_control, 0x0, 0x20, true, 0xefddf06850ea6a86)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_TDRDBGCTRL_ESCAPE.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0x1926f48cc29c0d77)
#else
#define _m00
#define _m01
#endif