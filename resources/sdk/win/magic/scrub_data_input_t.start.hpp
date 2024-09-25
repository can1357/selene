#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_INPUT.Size", size, 0x0, 0x20, true, 0x73cf09abcf50859e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_INPUT.Flags", flags, 0x20, 0x20, true, 0xc0ed014099ac9211)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCRUB_DATA_INPUT.MaximumIos", maximum_ios, 0x40, 0x20, true, 0xc6bb332ec082e745)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 816>), "_SCRUB_DATA_INPUT.ResumeContext", resume_context, 0x400, 0x80, true, 0x2b59c81df16fb0bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_SCRUB_DATA_INPUT.ObjectId", object_id, 0x60, 0x80, true, 0x74f3fb0114eed607)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif