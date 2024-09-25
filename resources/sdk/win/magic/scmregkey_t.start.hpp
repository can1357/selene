#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCMREGKEY.dwEntryLoc", dw_entry_loc, 0x0, 0x40, true, 0x57af01e0e6539902)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCMREGKEY.dwHash", dw_hash, 0x40, 0x20, true, 0xe367c3906eb674ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCMREGKEY.dwScmId", dw_scm_id, 0x60, 0x20, true, 0x2b60bcac0a0cf303)
#else
#define _m00
#define _m01
#define _m02
#endif