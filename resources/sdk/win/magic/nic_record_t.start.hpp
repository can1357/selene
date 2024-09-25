#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_NIC_RECORD.NICName", nic_name, 0x0, 0x0, true, 0xe60e7f5e7285477b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NIC_RECORD.Index", index, 0x1000, 0x20, true, 0xb6ecaaeadfd2c79)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NIC_RECORD.PhysicalAddrLen", physical_addr_len, 0x1020, 0x20, true, 0x5e2bb47074468cee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 8>), "_NIC_RECORD.PhysicalAddr", physical_addr, 0x1040, 0x80, true, 0x270891212e98ba5c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NIC_RECORD.Size", size, 0x10c0, 0x20, true, 0x40603f88b2b816)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.IpAddress", ip_address, 0x10e0, 0x20, true, 0xc13077fa67b106d6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.SubnetMask", subnet_mask, 0x1100, 0x20, true, 0xa4ef1c230e27bafc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.DhcpServer", dhcp_server, 0x1120, 0x20, true, 0x785aa55dd4049160)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.Gateway", gateway, 0x1140, 0x20, true, 0xd2c8025de7b20b2b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.PrimaryWinsServer", primary_wins_server, 0x1160, 0x20, true, 0x22594048dcd64ec9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NIC_RECORD.SecondaryWinsServer", secondary_wins_server, 0x1180, 0x20, true, 0x2c6085dd478b462d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 4>), "_NIC_RECORD.DnsServer", dns_server, 0x11a0, 0x80, true, 0xd5bb52c0c6cb5a0c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NIC_RECORD.Data", data, 0x1220, 0x20, true, 0x71b4e98fe2123404)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif