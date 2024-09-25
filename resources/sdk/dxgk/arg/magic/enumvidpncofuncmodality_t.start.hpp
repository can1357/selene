#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_ENUMVIDPNCOFUNCMODALITY.hConstrainingVidPn", h_constraining_vid_pn, 0x0, 0x40, true, 0x18954cd480fe741c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::enumcofuncmodality_pivot_type_t), "_DXGKARG_ENUMVIDPNCOFUNCMODALITY.EnumPivotType", enum_pivot_type, 0x40, 0x20, true, 0x585dd96772a884a5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::enum_pivot_t), "_DXGKARG_ENUMVIDPNCOFUNCMODALITY.EnumPivot", enum_pivot, 0x60, 0x40, true, 0x1cf18c15e362fc98)
#else
#define _m00
#define _m01
#define _m02
#endif