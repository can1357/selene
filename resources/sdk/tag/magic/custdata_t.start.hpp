#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCUSTDATA.cCustData", c_cust_data, 0x0, 0x20, true, 0xd91e2acb50495497)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custdataitem_t*), "tagCUSTDATA.prgCustData", prg_cust_data, 0x40, 0x40, true, 0x9f6d229c8ac2e90b)
#else
#define _m00
#define _m01
#endif