#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLOGPALETTE.palVersion", pal_version, 0x0, 0x10, true, 0xcdbed19133cf8458)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLOGPALETTE.palNumEntries", pal_num_entries, 0x10, 0x10, true, 0xea8fe3dcee54d59b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::paletteentry_t, 1>), "tagLOGPALETTE.palPalEntry", pal_pal_entry, 0x20, 0x20, true, 0x808419c4db8e2013)
#else
#define _m00
#define _m01
#define _m02
#endif