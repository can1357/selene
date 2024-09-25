#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_SELECTION_MENU_ENTRY.StrictDependency", strict_dependency, 0x0, 0x8, true, 0x13f9e30cd81cfb4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_SELECTION_MENU_ENTRY.InitiatingState", initiating_state, 0x8, 0x8, true, 0xc5dfc58347f5cf95)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PPM_SELECTION_MENU_ENTRY.DependentState", dependent_state, 0x10, 0x8, true, 0xe33f8c689ca55622)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_SELECTION_MENU_ENTRY.StateIndex", state_index, 0x20, 0x20, true, 0x4039b95091735bf5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PPM_SELECTION_MENU_ENTRY.Dependencies", dependencies, 0x40, 0x20, true, 0xa5e93d416339cc2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ppm::selection_dependency_t*), "_PPM_SELECTION_MENU_ENTRY.DependencyList", dependency_list, 0x80, 0x40, true, 0xda62b67eb80378eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif