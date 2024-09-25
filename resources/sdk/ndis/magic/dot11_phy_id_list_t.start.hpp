#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_PHY_ID_LIST.Header", header, 0x0, 0x20, true, 0x771f737314d8a5a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PHY_ID_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x115b76a1537c9e2e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PHY_ID_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x649540e91b4aa5ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "DOT11_PHY_ID_LIST.dot11PhyId", dot11_phy_id, 0x60, 0x20, true, 0xa24b8c869ab2ac68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif