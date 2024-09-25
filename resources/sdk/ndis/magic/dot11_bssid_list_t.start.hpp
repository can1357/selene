#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_BSSID_LIST.Header", header, 0x0, 0x20, true, 0x75093d3bd40589f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_BSSID_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x1341220a70e8e2d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_BSSID_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x72028e835ed0839e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 6>, 1>), "DOT11_BSSID_LIST.BSSIDs", bssi_ds, 0x60, 0x30, true, 0x5358355f84b957ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif