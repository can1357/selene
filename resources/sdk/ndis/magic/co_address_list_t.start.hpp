#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_ADDRESS_LIST.NumberOfAddressesAvailable", number_of_addresses_available, 0x0, 0x20, true, 0x4a514633134f3a01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_ADDRESS_LIST.NumberOfAddresses", number_of_addresses, 0x20, 0x20, true, 0x583c795269cebd78)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_address_t), "_CO_ADDRESS_LIST.AddressList", address_list, 0x40, 0x40, true, 0x80ea95dae660ad0b)
#else
#define _m00
#define _m01
#define _m02
#endif