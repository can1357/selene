#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATOM_TABLE_INFORMATION.NumberOfAtoms", number_of_atoms, 0x0, 0x20, true, 0x22d591f33be29a50)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_ATOM_TABLE_INFORMATION.Atoms", atoms, 0x20, 0x10, true, 0x94100d51c2f56d2a)
#else
#define _m00
#define _m01
#endif