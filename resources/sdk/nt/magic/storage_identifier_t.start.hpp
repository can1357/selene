#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_identifier_code_set_t), "_STORAGE_IDENTIFIER.CodeSet", code_set, 0x0, 0x20, true, 0x97545ac4154a98cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_identifier_type_t), "_STORAGE_IDENTIFIER.Type", type, 0x20, 0x20, true, 0x5576fd007b629411)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_IDENTIFIER.IdentifierSize", identifier_size, 0x40, 0x10, true, 0xfa8602f6892114fc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_IDENTIFIER.NextOffset", next_offset, 0x50, 0x10, true, 0x94033b9960a6ed0c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_association_type_t), "_STORAGE_IDENTIFIER.Association", association, 0x60, 0x20, true, 0x92c99a3832bbdb2d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_IDENTIFIER.Identifier", identifier, 0x80, 0x8, true, 0x53804790523fb4fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif