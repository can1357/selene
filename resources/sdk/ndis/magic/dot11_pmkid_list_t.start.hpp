#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_PMKID_LIST.Header", header, 0x0, 0x20, true, 0x51e1ac1ac747d41f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PMKID_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x86614d12fb9a2e8a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PMKID_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x21c143bf4485d0c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_pmkid_entry_t, 1>), "DOT11_PMKID_LIST.PMKIDs", pmki_ds, 0x60, 0xe0, true, 0x3535b9fe1ceeb723)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif