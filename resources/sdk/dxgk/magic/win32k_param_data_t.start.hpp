#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_WIN32K_PARAM_DATA.PathsArray", paths_array, 0x0, 0x40, true, 0x7b7ae3cafd8b4891)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_WIN32K_PARAM_DATA.ModesArray", modes_array, 0x40, 0x40, true, 0x34c7311fc111ae23)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_WIN32K_PARAM_DATA.NumPathArrayElements", num_path_array_elements, 0x80, 0x20, true, 0xe6a7938e7d7b4fc2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_WIN32K_PARAM_DATA.NumModeArrayElements", num_mode_array_elements, 0xa0, 0x20, true, 0xf72f0ba1ceed99b9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_WIN32K_PARAM_DATA.SDCFlags", sdc_flags, 0xc0, 0x20, true, 0xa625bb634d83fa5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif