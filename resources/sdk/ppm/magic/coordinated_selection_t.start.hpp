#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_COORDINATED_SELECTION.MaximumStates", maximum_states, 0x0, 0x20, true, 0x28fcb32e10534b82)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_COORDINATED_SELECTION.SelectedStates", selected_states, 0x20, 0x20, true, 0x76c15f8ef83a7b37)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_COORDINATED_SELECTION.DefaultSelection", default_selection, 0x40, 0x20, true, 0xa3620470ea7b7024)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_PPM_COORDINATED_SELECTION.Selection", selection, 0x80, 0x40, true, 0x8a624dd1f81c424f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif