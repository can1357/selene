#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MCUPDATE_INFO.List", list, 0x0, 0x80, true, 0x637ecfa1d22f284f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCUPDATE_INFO.Status", status, 0x80, 0x20, true, 0x85ddcbef170ac22a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCUPDATE_INFO.Id", id, 0xc0, 0x40, true, 0xed792c964e225df5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MCUPDATE_INFO.VendorScratch", vendor_scratch, 0x100, 0x80, true, 0x4be7da96988b7abe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif